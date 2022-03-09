# হার্ডওয়্যার

IoT শব্দে **T** এর পূর্ণরূপ হলো **Things** বা জিনিষ এবং এটি মূলত আমাদের চারপাশের বাস্তব জগতের সাথে যোগাযোগ করে এমন ডিভাইসগুলিকে বোঝায়। শিক্ষার্থী এবং শৌখিন ব্যাক্তিদের কাছে সাধারণত থাকে এমন সব যন্ত্র দিয়েই প্রতিটি প্রজেক্ট সাজানো হয়েছে। ব্যক্তিগত পছন্দ, প্রোগ্রামিং ভাষার জ্ঞান, শেখার লক্ষ্য এবং প্রাপ্যতার উপর নির্ভর করে প্রজেক্টগুলোর জন্য আইওটি হার্ডওয়্যারের দুটি অপশন রয়েছে। এছাড়াও যাদের কাছে বর্তমানে হার্ডওয়্যার নেই অথবা শেখার পরে কিনতে চায়, তাদের জন্য রয়েছে **ভার্চুয়াল হার্ডওয়্যার** !

> 💁 এসাইনমেন্টগুলো করার জন্য কোন আইওটি হার্ডওয়্যার কেনার প্রয়োজন নেই, বরং ভার্চুয়াল হার্ডওয়্যার দিয়েই সব করা যাবে।

ফিজিক্যাল হার্ডওয়্যার অপশনগুলি হল [আরডুইনো](#আরডুইনো) এবং [রাস্পবেরি পাই](#রাস্পবেরি-পাই)। প্রতিটি প্ল্যাটফর্মের নিজস্ব সুবিধা এবং অসুবিধা থাকে এবং এগুলি ১টি প্রাথমিক লেসনে ব্যখ্যা করা হয়েছে। কোন হার্ডওয়্যার প্ল্যাটফর্মটি নিয়ে কাজ করতে সবচেয়ে বেশি আগ্রহ তা সিদ্ধান্ত নিতে সেই লেসনটি দেখতে হবে।

পাঠ এবং এসাইনমেন্টের জটিলতা হ্রাস করার জন্য প্রতিটি লেসনে নির্দিষ্ট হার্ডওয়্যার বেছে নেওয়া হয়েছে। যদিও আমাদের ব্যবহৃত হার্ডওয়্যার এর বাইরে অন্যান্য হার্ডওয়্যারও কাজ করতে পারে, তবে আমরা গ্যারান্টি দিতে পারি না যে সমস্ত কাজ অতিরিক্ত হার্ডওয়্যার ছাড়াই শিক্ষার্থীর ডিভাইসে করা যাবে। উদাহরণস্বরূপ, সাধারণ আরডুইনো ডিভাইসে ওয়াইফাই নেই, যা ক্লাউডের সাথে সংযোগ স্থাপনের জন্য কিন্তু প্রয়োজন - একারণেই তাই WIO Terminal বেছে নেওয়া হয়েছে কারণ এতে ওয়াইফাই বিল্ট-ইন রয়েছে।

এছাড়াও এই প্রজেক্টের জন্য কিছু অ-প্রযুক্তিগত উপকরণ যেমন মাটি , টবের উদ্ভিদ এবং ফল বা শাকসব্জির প্রয়োজন হবে।

## ক্রয়তালিকা

![The Seeed studios logo](../images/seeed-logo.png)

Seeed Studios থেকে সহজেই kit ক্রয় করা যাবে :

### আরডুইনো- Wio Terminal

**[IoT for beginners with Seeed and Microsoft - Wio Terminal Starter Kit](https://www.seeedstudio.com/IoT-for-beginners-with-Seeed-and-Microsoft-Wio-Terminal-Starter-Kit-p-5006.html)**

[![The Wio Terminal hardware kit](../images/wio-hardware-kit.png)](https://www.seeedstudio.com/IoT-for-beginners-with-Seeed-and-Microsoft-Wio-Terminal-Starter-Kit-p-5006.html)

### রাস্পবেরি পাই

**[IoT for beginners with Seeed and Microsoft - Raspberry Pi 4 Starter Kit](https://www.seeedstudio.com/IoT-for-beginners-with-Seeed-and-Microsoft-Raspberry-Pi-Starter-Kit.html)**

[![The Raspberry Pi Terminal hardware kit](../images/pi-hardware-kit.png)](https://www.seeedstudio.com/IoT-for-beginners-with-Seeed-and-Microsoft-Raspberry-Pi-Starter-Kit.html)

## আরডুইনো

 আরডুইনো এর সব কোড C++ ভাষায় করা হয়। অ্যাসাইনমেন্ট সম্পন্ন করতে  নিম্নলিখিত উপাদানগুলির প্রয়োজন হবে:

### আরডুইনো হার্ডওয়্যার

* [Wio Terminal](https://www.seeedstudio.com/Wio-Terminal-p-4509.html)
* *ঐচ্ছিক* - USB-C ক্যাবল অথবা USB-A থেকে USB-C এডাপ্টার - উইও টার্মিনালে একটি ইউএসবি-সি পোর্ট রয়েছে এবং এটিতে ইউএসবি-সি থেকে ইউএসবি-এ ক্যাবল থাকে। যদি ব্যবহারকারীর পিসি বা ম্যাক এ কেবল ইউএসবি-সি পোর্ট থাকে তবে একটি ইউএসবি-সি বা ইউএসবি-এ থেকে ইউএসবি-সি অ্যাডাপ্টার প্রয়োজন হবে।

### আরডুইনোর সুনির্দিষ্ট সেন্সর এবং অ্যাকচুয়েটর

এগুলি Wio টার্মিনাল আরডুইনো ডিভাইসটিতে ব্যবহারের জন্য নির্দিষ্ট এবং রাস্পবেরি পাই ব্যবহারের সাথে সম্পর্কিত নয়।

* [ArduCam Mini 2MP Plus - OV2640](https://www.arducam.com/product/arducam-2mp-spi-camera-b0067-arduino/)
* [ReSpeaker 2-Mics Pi HAT](https://www.seeedstudio.com/ReSpeaker-2-Mics-Pi-HAT.html)
* [Breadboard Jumper Wires](https://www.seeedstudio.com/Breadboard-Jumper-Wire-Pack-241mm-200mm-160mm-117m-p-234.html)
* হেডফোন বা অন্য কোন স্পীকার যেটির 3.5mm জ্যাক বা JST স্পীকার রয়েছে যেমন:
  * [Mono Enclosed Speaker - 2W 6 Ohm](https://www.seeedstudio.com/Mono-Enclosed-Speaker-2W-6-Ohm-p-2832.html)
  * [Grove speaker plus](https://www.seeedstudio.com/Grove-Speaker-Plus-p-4592.html)
* *ঐচ্ছিক* - ১৬জিবি বা তার চেয়ে ছোট মাইক্রো এসডি কার্ড যা দ্বারা পর্যবেক্ষণের জন্য ছবি ক্যাপচার করা হবে। এছাড়াও কম্পিউটারে সরাসরি এসডি কার্ড ব্যবহারের সুযোগ না থাকলে, প্রয়োজনীয় ক্যাবল নিতে হবে। **গুরুত্বপূর্ণ নোট** - Wio টার্মিনাল কেবল 16GB পর্যন্ত এসডি কার্ডগুলিকে সাপোর্ট করে, এর চেয়ে বেশি সাইজের কার্ড ব্যবহারযোগ্য হবেনা।

## রাস্পবেরি পাই

 আরডুইনো এর সব কোড পাইথন ভাষায় করা হয়। অ্যাসাইনমেন্ট সম্পন্ন করতে নিম্নলিখিত উপাদানগুলির প্রয়োজন হবে:

### রাস্পবেরি-পাই হার্ডওয়্যার 

* [Raspberry Pi](https://www.raspberrypi.org/products/raspberry-pi-4-model-b/)
  > 💁 2B থেকে এর উপরের প্রতিটি ভার্সন দ্বারাই সকল এসাইনমেন্ট করা যাবে।
* মাইক্রো এসডি কার্ড - কম্পিউটারে সরাসরি এসডি কার্ড ব্যবহারের সুযোগ না থাকলে, প্রয়োজনীয় ক্যাবল নিতে হবে।
* ইউএসবি পাওয়ার সাপ্লাই - যদি রাস্পবেরি পাই 4 ব্যবহার করা হয়, তবে একটি ইউএসবি-সি পাওয়ার সাপ্লাই প্রয়োজন। আর পুরনো ডিভাইসগুলির জন্য একটি মাইক্রো-ইউএসবি পাওয়ার সাপ্লাই প্রয়োজন।

### রাস্পবেরি-পাই এর সুনির্দিষ্ট সেন্সর এবং অ্যাকচুয়েটর

এগুলি রাস্পবেরি পাই তে ব্যবহারের জন্য নির্দিষ্ট এবং আরডুইনো এর ব্যবহারের সাথে সম্পর্কিত নয়।

* [Grove Pi base hat](https://www.seeedstudio.com/Grove-Base-Hat-for-Raspberry-Pi.html)
* [Raspberry Pi Camera module](https://www.raspberrypi.org/products/camera-module-v2/)
* মাইক্রোফোন ও স্পীকার:

  নিম্নের যেকোন একটি:
  * যেকোন ইউএসবি স্পীকার সম্বলিত মাইক্রোফোন বা স্পীকার যেটিতে 3.5mm জ্যাক ক্যাবল দরকার হবে কিংবা  HDMI অডিও আউটপুট  লাগবে যদি মনিটর  বা টিভির স্পীকারের সাথে যুক্ত করা হয়।
  * বিল্ট-ইন মাইক্রোফোন সম্বলিত ইউএসবি হেডসেট
  * [ReSpeaker 2-Mics Pi HAT](https://www.seeedstudio.com/ReSpeaker-2-Mics-Pi-HAT.html) with
    * হেডফোন বা অন্য কোন স্পীকার যেটির 3.5mm জ্যাক বা JST স্পীকার রয়েছে যেমন:
    * [Mono Enclosed Speaker - 2W 6 Ohm](https://www.seeedstudio.com/Mono-Enclosed-Speaker-2W-6-Ohm-p-2832.html)
  * [USB Speakerphone](https://www.amazon.com/USB-Speakerphone-Conference-Business-Microphones/dp/B07Q3D7F8S/ref=sr_1_1?dchild=1&keywords=m0&qid=1614647389&sr=8-1)
* [Grove Light sensor](https://www.seeedstudio.com/Grove-Light-Sensor-v1-2-LS06-S-phototransistor.html)
* [Grove button](https://www.seeedstudio.com/Grove-Button.html)

## সেন্সর এবং অ্যাকচুয়েটর

এখানের বেশিরভাগ সেন্সর এবং অ্যাক্চুয়েটরগুলি আরডুইনো এবং রাস্পবেরি পাই উভয় ক্ষেত্রেই ব্যবহৃত হয়:

* [Grove LED](https://www.seeedstudio.com/Grove-LED-Pack-p-4364.html) x 2
* [Grove humidity and temperature sensor](https://www.seeedstudio.com/Grove-Temperature-Humidity-Sensor-DHT11.html)
* [Grove capacitive soil moisture sensor](https://www.seeedstudio.com/Grove-Capacitive-Moisture-Sensor-Corrosion-Resistant.html)
* [Grove relay](https://www.seeedstudio.com/Grove-Relay.html)
* [Grove GPS (Air530)](https://www.seeedstudio.com/Grove-GPS-Air530-p-4584.html)
* [Grove Time of flight Distance Sensor](https://www.seeedstudio.com/Grove-Time-of-Flight-Distance-Sensor-VL53L0X.html)

## ঐচ্ছিক হার্ডওয়্যার

রিলে ব্যবহার করে স্বয়ংক্রিয় পানি সরবরাহের লেসনগুলো তৈরী করা হয়েছে। বিকল্প হিসাবে, রিলেটির সাথে নীচে তালিকাভুক্ত হার্ডওয়্যার ব্যবহার করে ইউএসবি চালিত পানির পাম্প সংযুক্ত করা যাবেঃ

* [6V water pump](https://www.seeedstudio.com/6V-Mini-Water-Pump-p-1945.html)
* [USB terminal](https://www.adafruit.com/product/3628)
* সিলিকন পাইপ
* লাল এবং কালো ক্যাবল
* ছোট ফ্ল্যাট-হেড স্ক্রু ড্রাইভার

## ভার্চুয়াল হার্ডওয়্যার

ভার্চুয়াল হার্ডওয়্যার ব্যবহার করলে সেখানেই সেন্সর এবং অ্যাকচুয়েটর সিমুলেটর পাওয়া যাবে। হার্ডওয়্যার প্রাপ্যতার উপর নির্ভর করে, এটি সাধারণ ডিভাইসে যেমন ম্যাক, পিসি চালাতে পারা যাবে বা এটি রাস্পবেরি পাইতে চালানো যাবে এবং কেবল যে হার্ডওয়্যার নেই তার জন্য এটি ব্যবহার করা যাবে। উদাহরণস্বরূপ, যদি কারো কাছে রাস্পবেরি পাই ক্যামেরা থাকে কিন্তু গ্রোভ সেন্সরগুলি যদি না থাকে, তবে তার রাস্পবেরি পাইতে ভার্চুয়াল ডিভাইস কোডটি চালাতে পারবে। এতে করে গ্রোভ সেন্সরগুলি সিমুলেট করতে সক্ষম হবে আবার একটি ফিজিক্যাল ক্যামেরাও ব্যবহার করতে পারবে।

ভার্চুয়াল হার্ডওয়্যার হিসেবে আমরা [CounterFit project](https://github.com/CounterFit-IoT/CounterFit) ব্যবহার করবো।

এই পাঠগুলি সম্পূর্ণ করতে একটি ওয়েব ক্যাম, মাইক্রোফোন এবং অডিও আউটপুট যেমন স্পিকার বা হেডফোন থাকা দরকার। এগুলি বিল্ট-ইন বা বাহ্যিক হতে পারে এবং অপারেটিং সিস্টেমের সাথে কাজ করার জন্য কনফিগার করা দরকার। তবে সব অ্যাপ্লিকেশন থেকে এগুলো ব্যবহারের জন্য অনুমতি দিতে হবে।
