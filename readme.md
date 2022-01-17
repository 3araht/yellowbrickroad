![yellowbrickroad](https://github.com/3araht/yellowbrickroad/blob/main/pictures/YellowBrickRoad_Title.jpg)

# yellowbrickroad キーボード
"There’s no place like home.” カンザスに帰りたくなってこのキーボードを作りました（ウソ）。  
yellowbrickroad は 53音（4オクターブちょっと）のコンパクトサイズMIDIキーボードキットです。頭脳部分に Raspberry Pi Pico を採用しています。

縦は約20 cm, 横は約23 cm。A4用紙に収まるサイズです。  

## 機能説明  
- クロマチック音階、コード、クロマチック音階＋コード（一部）、ヘプタトニックスケール、ヨナ抜き音階のレイヤーがあります。  
- REMAP により、好きな配列を設定可能。  
- サスティンペダルをつけることが可能。  
- LED でキーボードを光らせることが可能。  

yellowbrickroad は PC / Mac / iPad / iPhone / Android などで動作します(ただし、Raspberry Pi Pico にファームウェアを書き込むときに PC / Mac が必要)。

コネクタが Lightning タイプの iPad や iPhone で使う場合、下記に示すアダプターを使って電源供給しながら使えることを確認しています。
iPad や iPhone で yellowbrickroad を使う場合には電源が必要ですので、必ず "[Lightning - USB 3カメラアダプタ](https://www.apple.com/jp/shop/product/MK0W2AM/A/)" をお使いください。
"Lightning - USBカメラアダプタ" では電源供給ができません。

なお、USB-C タイプの iPad Air 4th Gen で試したところ、電源供給なしに問題なく動作させることができました。

中央にあるロータリーエンコーダは長押しでモード切り替えレイヤーへ。短押しでミュート切り替え、回転させるとシステム音量の調整に使用することが可能です。  
右下のホイール型のロータリーエンコーダを単押しすることでもレイヤーが順次切り替わります。ホイールをスクロールすると移調（Transpose）するようになってます。  
中央のロータリーエンコーダを長押し中にホイールを回すとオクターブが切り替わります。  

オプションにより、LED を搭載すれば写真のようにバックライト点灯させることが可能です（LEDのハンダ付けは難易度が高いので、ご注意ください）。

# 外観および使用例
また、こちらに[機能詳細紹介動画]()がございます(工事中)。

# キーボードキット
遊舎工房でお求めいただけます。  
[遊舎工房 販売ページへのリンクはこちら]()(工事中)。  

BOOTH では、yellowbrickroad の他、クロマチックボタンアコーディオンを模した MIDIキーボードの giabalanai、 giabaLEnai、 giabaRInai、 giabaRInaix2、クロマトーンを模した chroamtonemini / chromatoneminipico がお求めいただけます。  
[BOOTH 販売ページへのリンクはこちら](https://3araht.booth.pm/)。  

# ファームウェア

yellowbrickroad は QMK firmware を使っています。  
ただし 2022/1/1 現在 正式に Raspberry Pi に対応していません。  
[せきごん さんの開拓された手法](https://scrapbox.io/self-made-kbds-ja/RP2040対応のQMK(非公式)を動かす) を使わせていただいております。  

yellowbrickroad のソースは[こちら](https://github.com/3araht/yellowbrickroad/blob/main/temp/qmk_firmware/keyboards/yellowbrickroad) からダウンロード下さい。

もしくは、こちらのコンパイル済の [uf2 file](https://github.com/3araht/yellowbrickroad/blob/main/yellowbrickroad_led.uf2) をお使いください.

# ビルドガイド

[日本語ビルドガイド](https://github.com/3araht/yellowbrickroad/blob/main/docs/build.md)

# コンタクト先:
Twitter と YouTube はじめました。  
http://twitter.com/3araht  
https://www.youtube.com/channel/UC0zYtYMoxb0P7S8DPAkl0zA/  
https://www.instagram.com/3araht/  


# yellowbrickroad keyboard
"There’s no place like home.” I designed this keyboard since I wanted to go back to Kansas, LOL.  
yellowbrickroad is a MIDI keyboard which has 53 keys (= 4 octaves+ ) to play notes. Raspberry Pi Pico is used as the "brain" of yellowbrickroad.  

Size: 20 cm (approx 8 inches) x 23 cm (approx 9 inches).  
It fits in an A4 / Letter size paper.  

## Features  
- Layers: Chromatic layout, chords, Chromatic + chords, Heptatonic scale, and Pentatonic scale are supported by default.  
- Layouts are configurable by REMAP.  
- Sustain pedal supported.  
- It could be lit up by LED.  

yellowbrickroad works with PC, Mac, iPad, iPhone, and Android(However, either PC or Mac is needed for flashing firmware to Raspberry Pi Pico).

When using it with an iPad or iPhone, it works when the below adapter is used with a power supply. The power supply is necessary to use yellowbrickroad on iPad and iPhone. Make sure to use "[Lightning to USB 3 Camera Adapter](https://www.apple.com/shop/product/MK0W2AM/A/)", not "Lightning to USB Camera Adapter."  

Confirmed with an iPad Air 4th Gen, which has a USB-C port, it worked without the power supply.

A rotary encoder in the middle can be used to change the settings of yellowbrickroad by long-pressing the push-button of the encoder, mute/unmute by clicking, and adjusting the system volume of your computer by rotating the encoder.  
A wheel-type rotary encoder can be used to adjust the transpose by rotating the wheel, and change the layer to the next one by clicking it.  It can be used to change the octave settings by scrolling the wheel when the rotary encoder in the middle is long-pressed.  

# How it looks & how it works
Check this out!  

A detailed introduction is shown [here]()(under construction).

# Keyboard kit
It's available at Yushakobo.  
Click [here]()(under construction) for Yushakobo's yellowbrickroad page.

The keyboard kit is available from [BOOTH](https://3araht.booth.pm/).  
Click [here](https://www.tenso.com/en/static/lp_shop_booth) for BOOTH overseas shipping!


# Firmware

yellowbrickroad uses QMK for its firmware. However, as of Jan 1st, 2022, QMK does not fully support Raspberry Pi...  
Thanks to sekigon-gonnoc, [the method sekigon-gonnoc has built](https://scrapbox.io/self-made-kbds-ja/RP2040対応のQMK(非公式)を動かす) is used.  

Please download yellowbrickroad codes from [here](https://github.com/3araht/yellowbrickroad/blob/main/temp/qmk_firmware/keyboards/yellowbrickroad).

Or, use this pre-compiled [uf2 file](https://github.com/3araht/yellowbrickroad/blob/main/yellowbrickroad_led.uf2) for your convenience.

# Build Guide

[Build Guide in Japanese](https://github.com/3araht/yellowbrickroad/blob/main/docs/build.md)  
Try [Google Translated guide](https://translate.google.com/translate?sl=ja&tl=en&u=https://github.com/3araht/yellowbrickroad/blob/main/docs/build.md) for your language preferences. Trust me, it works quite well, more than expected.

# Contact
If you need any help, you know where to find me.  
http://twitter.com/3araht  
https://www.youtube.com/channel/UC0zYtYMoxb0P7S8DPAkl0zA/  
https://www.instagram.com/3araht/  
