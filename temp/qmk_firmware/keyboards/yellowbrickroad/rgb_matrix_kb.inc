/* Copyright 2022 3araht
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifdef RGB_MATRIX_KEYREACTIVE_ENABLED
RGB_MATRIX_EFFECT(my_solid_reactive_multiwide_col)
RGB_MATRIX_EFFECT(my_solid_reactive_col)
RGB_MATRIX_EFFECT(my_party_rocks)

#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV my_solid_reactive_multiwide_col_math(HSV hsv, int16_t dx, int16_t dy, uint8_t dist, uint16_t tick) {
    uint16_t effect = tick + dist;
    dx              = dx < 0 ? dx * -1 : dx;
    dx              = dx * 16 > 255 ? 255 : dx * 16;
    effect += dx;
    if (effect > 255) effect = 255;
    hsv.v = qadd8(hsv.v, 255 - effect);
    // hsv.h += qsub8(130, effect);
    return hsv;
}

bool my_solid_reactive_multiwide_col(effect_params_t* params) {
    return effect_runner_reactive_splash(0, params, &my_solid_reactive_multiwide_col_math);
}


bool my_solid_reactive_col(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    uint16_t max_tick = 65535 / rgb_matrix_config.speed;
    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        HSV hsv = rgb_matrix_config.hsv;
        uint16_t tick = max_tick;
        // Reverse search to find most recent key hit
        for (int8_t j = g_last_hit_tracker.count - 1; j >= 0; j--) {
            if (g_last_hit_tracker.x[j] == g_led_config.point[i].x && g_last_hit_tracker.tick[j] < tick) {
                tick = g_last_hit_tracker.tick[j];
                break;
            }
        }

        uint16_t offset = scale16by8(tick, rgb_matrix_config.speed);
        hsv.h += qsub8(130, offset);
        RGB      rgb    = rgb_matrix_hsv_to_rgb(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
    return led_max < RGB_MATRIX_LED_COUNT;
}

bool my_party_rocks(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    HSV hsv = {rand() & 0xFF, rand() & 0xFF, rgb_matrix_config.hsv.v};
    RGB rgb = rgb_matrix_hsv_to_rgb(hsv);
    // rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    rgb_matrix_set_color_all(rgb.r, rgb.g, rgb.b);
    return led_max < RGB_MATRIX_LED_COUNT;
}

#    endif      // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif          // RGB_MATRIX_KEYREACTIVE_ENABLED
