# Wio Terminal

[সীড স্টুডিও](https://www.seeedstudio.com/Wio-Terminal-p-4509.html) এর  Wio Terminal  একটি আরডুইনো সাপোর্টেড মাইক্রোকন্ট্রোলার, যাতে  ওয়াইফাই সংযোগ এবং কিছু সেন্সর ও অ্যাকচুয়েটর বিল্ট-ইন রয়েছে। এছাড়াও এর সাথে রয়েছে কিছু পোর্ট, অতিরিক্ত সেন্সর ও অ্যাকচুয়েটর সংযোগ এবং এটি নির্মাণ করা হয়েছে একটি হার্ডওয়্যার ইকোসিস্টেম  ব্যবহার করে যার নাম
[Grove](https://www.seeedstudio.com/category/Grove-c-1003.html).

![A Seeed studios Wio Terminal](../../../../images/wio-terminal.png)

## সেটআপ

Wio Terminal ব্যবহার করার জন্য, আমাদের কিছু ফ্রি সটওয়্যার নিজেদের কম্পিউটার এ ইনস্টল করতে হবে। আমাদের অবশ্যই ওয়াইফাই সংযোগদানের পূর্বে Wio Terminal ফার্মওয়্যারটি আপডেট করে নিতে হবে।

### কাজের সেটআপ

প্রথমেই আমরা আমাদের প্রয়োজনীয় সটওয়্যারগুলো এবং ফার্মওয়ারটি আপডেট করে নেব।

১. ভিজুয়াল স্টুডিও কোড (ভি এস কোড) ইনস্টল করতে হবে । এটি  একটি এডিটর যার সাহায্যে আমরা আমাদের ডিভাইস কোড লিখতে পারি  সি/সি++ ভাষায়। বিস্তারিত জানতে [VS Code documentation](https://code.visualstudio.com?WT.mc_id=academic-17441-jabenn)  টি পড়ে নেয়া যেতে পারে।

   > 💁 আরডুইনো ডেভলপমেন্ট এর জন্য আর একটি ভালো আই.ডি.ই হলো [Arduino IDE](https://www.arduino.cc/en/software). এই IDE টির সাথে কাজ করার পূর্ব অভিজ্ঞতা থাকলে ভি এস কোড ও platformIO এর পরিবর্তে একেও ব্যাবহার করা যেতে পারে। তবে, এখানে আমরা ভি এস কোডের উপর ভিত্তি করেই কাজ করবো।

২. এরপর ভি এস কোড platformIO এক্সটেনশনটি ইনস্টল করতে হবে। এই এক্সটেনশনটি ভি এস কোডে ইনস্টল করতে [PlatformIO extension documentation](https://marketplace.visualstudio.com/items?WT.mc_id=academic-17441-jabenn&itemName=platformio.platformio-ide) এ দেওয়া দিকির্দেশনাগুলো পড়ে দেখতে পারেন। এটি একটি ভি এস কোড এক্সটেনশন যা সি/সি++ ভাষায় মাইক্রোকন্ট্রোলার প্রোগ্রামিংকে সাপোর্ট করে। এই এক্সটেনশনটি মাইক্রোসফট সি/সি++ এর উপর নির্ভর করে , সি অথবা সি++ ভাষা নিয়ে কাজ করার জন্য। উল্লেখ্য, এই সি/সি++ এক্সটেনশন সয়ংক্রিয়ভাবে ইনস্টল হয়ে যায় যখন কেউ platformIO ইনস্টল করে।

৩. এখন, আমরা আমাদের Wio Terminal  কে কম্পিউটার এর সাথে সংযুক্ত করব। এটির নিচের দিকে একটি ইউএসবি-সি পোর্ট আছে, সেটিকে আমরা আমাদের কম্পিউটার এর ইউএসবি পোর্ট এর সাথে সংযোগ দিব। উইও টার্মিনালে ইউএসবি-সি ও ইউএসবি-এ ক্যাবল থাকে। যদি আমাদের কম্পিউটারে শুধু ইউএসবি-সি পোর্ট থেকে, তাহলে আমাদের হয় ইউএসবি-সি ক্যাবল অথবা ইউএসবি-এ ক্যাবলের প্রয়োজন হবে ইউএসবি-সি অ্যাডাপ্টার এ সংযোগ দেওয়ার জন্য।

৪. [Wio Terminal Wiki WiFi Overview documentation](https://wiki.seeedstudio.com/Wio-Terminal-Network-Overview/) এ উল্লেখিত দিকনির্দেশনা গুলোকে মেনে আমরা আমাদের উইও টার্মিনাল সেটআপ ও ফার্মওয়্যার আপডেট করে ফেলি।


### হ্যালো ওয়ার্ল্ড

 প্রথাগতভাবে, কোনো নতুন প্রোগ্রামিং ল্যাঙ্গুয়েজ অথবা টেকনোলজি নিয়ে কাজ শুরু করার সময় আমরা একটি "Hello World" application লিখি, একটি ছোট application যা আউটপুট হিসেবে `"Hello World"` লেখাটি দেখায়। এতে করে আমরা বুঝি যে আমাদের প্রোগ্রামটিতে সকল টুল সঠিকভাবে কাজ করছে।

আমাদের Wio Terminal এর হেলো ওয়ার্ল্ড অ্যাপটি এটি নিশ্চিত করবে যে আমাদের ভিজুয়াল স্টুডিও কোড platformIO এর সাথে সঠিকভাবে ইনস্টল করা হয়েছে এবং এখন এটি microcontroller development এর জন্য প্রস্তুত।

### platformIO প্রজেক্ট তৈরী

আমাদের প্রথম কাজ হলো platformIO ব্যাবহার করে একটি নতুন প্রজেক্ট তৈরী করা যা Wio terminal এর জন্য কনফিগার করা।

#### কাজ- platformIO প্রজেক্ট তৈরী

একটি platformIO প্রজেক্ট তৈরী করি।

১. Wio terminal কে কম্পিউটারের সাথে সংযোগ দেই।

২. ভি এস কোড launch করি

৩. আমরা platformIO আইকনটি সাইড মেন্যু বারে দেখতে পাবো:

   ![The Platform IO menu option](../../../../images/vscode-platformio-menu.png)

   এই মেন্যু আইটেমটি সিলেক্ট করে, সিলেক্ট করি *PIO Home -> Open*

   ![The Platform IO open option](../../../../images/vscode-platformio-home-open.png)

৪. Welcome স্ক্রীন থেকে **+ New Project** বাটনটিতে ক্লিক করি।

   ![The new project button](../../../../images/vscode-platformio-welcome-new-button.png)

৫. প্রজেক্টটিকে *Project Wizard* এ configure করি:

   i. প্রজেক্টটিকে `nightlight` নাম দেই।

   ii. *Board* dropdown থেকে, `WIO` লিখে বোর্ডগুলোকে ফিল্টার করি, *Seeeduino Wio Terminal* সিলেক্ট করি।

   ii. *Framework* টিকে *Arduino* হিসেবে রাখি|

   iii. হয় *Use default location* কে টিক অবস্থায় ছেড়ে দেই অথবা সেটিকে টিক না দিয়ে আমাদের প্রজেক্টটির জন্য যেকোনো location সিলেক্ট করি।

   iv. **Finish** বাটনটিতে ক্লিক করি।

   ![The completed project wizard](../../../../images/vscode-platformio-nightlight-project-wizard.png)

   platformIO এখন wio terminal এর কোডগুলোকে compile করার জন্য প্রয়োজনীয় কম্পনেন্টস ডাউনলোড করে নেবে এবং আমাদের প্রজেক্টটি create করে নেবে। পুরো প্রক্রয়াটি সম্পন্ন হতে কয়েক মিনিট সময় লাগতে পারে।

### platformIO প্রজেক্টটি investigate করে দেখা

ভি এস কোড এক্সপ্লোরার আমাদের কিছু ফাইল এবং ফোল্ডার দেখাবে যা platformIO wizerd দ্বারা তৈরি হয়েছে।

#### ফোল্ডারস

* `.pio` - এই ফোল্ডারটি কিছু temporary ডাটা বহন করে যা platformIO এর প্রয়জন হতে পারে, যেমন: libraries অথবা compiled code, এটা delete করার সাথে সাথে আবার পুনঃনির্মিতো হয়। U আমরা প্রজেক্টটি কোনো সাইট 
* `.vscode` - এই ফোল্ডারটি ভি এস কোড ও platformIO দ্বারা ব্যবহৃত configuration গুলোকে বহন করে। এটা delete করার সাথে সাথে আবার পুনঃনির্মিতো হয়। প্রজেক্টটি কোনো সাইট যেমন GitHub এ share করতে এর কোনো সোর্স কোড কন্ট্রোল অ্যাড করতে হবে না।
* `include` - এই ফোল্ডারটি এক্সটার্নাল হেডার ফাইল বহনের জন্য রয়েছে যা আমাদের কোডে অতিরিক্ত library যোগের সময় দরকার হয়। আমাদের কাজগুলোতে আমরা এই ফোল্ডারটি ব্যাবহার করব না।
* `lib` - এই ফোল্ডারটি কিছু এক্সটার্নাল libraries বহন করবে যা আমরা আমাদের কোড থেকে কল করব। আমাদের কাজগুলোতে আমরা এই ফোল্ডারটি ব্যাবহার করব না।
* `src` - এই ফোল্ডারটি আমাদের main সোর্স কোডটিকে বহন করবে, যা কিনা একটি সিংগেল ফাইল - main.cpp
* `test` - এই ফোল্ডারটি সেই স্থান যেখানে আমরা আমাদের কোডের ইউনিট টেস্ট গুলোকে রাখবো।

#### ফাইলস

* `main.cpp` - src ফোল্ডারে অবস্থিত এই ফাইলটি আমাদের অ্যাপ্লিকেশন এর entry point হিসেবে কাজ করবে। আমরা ফাইলটি খুলে দেখব, এটি বহন করে:

    ```cpp
    #include <Arduino.h>
    
    void setup() {
      // put your setup code here, to run once:
    }
    
    void loop() {
      // put your main code here, to run repeatedly:
    }
    ```

    যখন ডিভাইসটি কাজ শুরু করে, Arduino framework টি সেটআপ ফাংশনটি একবার রান করে, এরপর নিরন্তর এটিকে রান করতে থেকে যতক্ষণ পর্যন্ত ডিভাইসটি বন্ধ না হয় 

* `.gitignore` - এটি সেই ফাইল ও ডিরেক্টরিগুলোকে লিস্ট করে রাখে, যেগুলোকে আমরা আমাদের কোড git source code control এ যুক্ত করার সময় ইগনোর করবো, যেমন: কোনো GitHub repository তে আপলোড করার সময়।

* `platformio.ini` - এই ফাইলে আমাদের ডিভাইসের এবং অ্যাপের configuration গুলো রয়েছে । এটি খুললে দেখা যাবে: 

    ```ini
    [env:seeed_wio_terminal]
    platform = atmelsam
    board = seeed_wio_terminal
    framework = arduino
    ```

    `[env:seeed_wio_terminal]` সেকশনটিতে wio terminal এর configuration আছে। আমরা একের অধিক `env` সেকশন রাখতে পারি যেন আমাদের কোডকে একের অধিক board এর জন্য compile করা যায়।

    Project wizerd থেকে আরো কিছু value যা configuration ম্যাচ করে:

  * `platform = atmelsam` Wio terminal যে হার্ডওয়্যারটি ব্যাবহার করে তাকে ডিফাইন করে (an ATSAMD51-based microcontroller)
  * `board = seeed_wio_terminal` মাইক্রোকন্ট্রোলার এর টাইপ কে ডিফাইন করে (the Wio Terminal)
  * `framework = arduino` আমাদের প্রজেক্টটি Arduino framework ব্যাবহার করে সেটি ডিফাইন করে।

### হ্যালো ওয়ার্ল্ড অ্যাপটি লিখি

এখন আমরা হ্যালো ওয়ার্ল্ড অ্যাপটি লিখার জন্য প্রস্তুত হয়েছি।

#### কাজ - হ্যালো ওয়ার্ল্ড অ্যাপটি লিখা

হ্যালো ওয়ার্ল্ড অ্যাপটি লিখি।

১.`main.cpp` ফাইলটি ভি এস কোড থেকে ওপেন করি।

২.কোডটি এমনভাবে লিখি যেনো এটি নিম্নোক্ত কোডটির সাথে মিলে যায়:

   ```cpp
   #include <Arduino.h>

   void setup()
   {
       Serial.begin(9600);

       while (!Serial)
           ; // Wait for Serial to be ready
    
       delay(1000);
   }
    
   void loop()
   {
       Serial.println("Hello World");
       delay(5000);
   }
   ```
    
  `setup` ফাংশনটি একটি connection কে initialize করে সিরিয়াল পোর্ট এর সাথে, সেই usb পোর্টটি যেটি আমাদের কম্পিউটারকে wio terminal এর সাথে সংযুক্ত করেছে। `9600` প্যারামিটারটি হলো [baud rate](https://wikipedia.org/wiki/Symbol_rate) (যা সিম্বল রেট হিসেবেও পরিচিত) সিরিয়াল পোর্ট এর মধ্য দিয়ে যাওয়া ডাটার speed (bits per second). এই সেটিং দ্বারা আমরা বোঝাই ৯৬০০ bits (০ এবং ১) ডাটা পাঠানো হচ্ছে প্রতি সেকেন্ডে। এরপর এটি সিরিয়াল পোর্টটি ready state এ যাওয়ার জন্য wait করে। 
    
  `loop` ফাংশনটি `Hello World!` লাইনটির character গুলো এবং একটি new line character সিরিয়াল পোর্টে পাঠায়। এরপর, এটি ৫০০০ মিলি সেকেন্ড সময়ের জন্য sleep state এ যায়। Loop শেষ হওয়ার পর, এটি আবার রান করে এবং চলতে থাকে যতক্ষণ পর্যন্ত মাইক্রোকন্ট্রোলারটি ON থাকে।

৩. কোডটি বিল্ড করে wio terminal এ আপলোড করি:

   i. ভি এস কোড command palette ওপেন করি।

   ii. টাইপ করি `PlatformIO Upload` আপলোড অপশনটি খুঁজে পাওয়ার জন্য, এরপর  *PlatformIO: Upload* সিলেক্ট করি।

   ![The PlatformIO upload option in the command palette](../../../../images/vscode-platformio-upload-command-palette.png)

   যদি দরকার হয়, platformIO এখন অটোমেটিক ভাবে কোডটিকে বিল্ড করবে, আপলোড করার পূর্বে।

   iii. কোডটি কম্পাইল হয়ে wio terminal এ আপলোড হয়ে যাবে 

   > 💁 আমরা যদি MacOS ব্যাবহার করে থাকি, একটি *DISK NOT EJECTED PROPERLY* notification দেখতে পাবো। এটা এজন্যে দেখায় যে, wio terminal টি মাউন্টেড হয় ড্রাইভ হিসেবে যা কিনা ফ্লাশিং প্রসেসের একটি পার্ট, এবং এটি বিচ্ছিন্ন হয়ে যায় যখন compiled code টি আমদর ডিভাইস এ লেখা। আমরা এই নোটিফিকেশনটি ইগনোর করতে পারি।

   ⚠️ আমরা যদি error দেখতে পাই যে আপলোড পোর্ট unavailable, প্রথমত, আমাদের দেখতে হবে wio টার্মিনালটি আমাদের কম্পিউটারের সাথে সংযুক্ত আছে কিনা এবং স্ক্রীন এর বামদিকের সুইচটি অন করা আছে কিনা। নিচের দিকের সবুজ লাইটটি অন থাকতে হবে। এরপরও যদি error আসে, আমরা on/off সুইটটিকে দুবার নিচের দিকে টানবো এমনভাবে যেনো আমাদের wio terminal টি bootloader mode এ যায়। এরপর, আবার আপলোড করবো।

wio terminal এর একটি serial monitor থাকে যা wio terminal থেকে usb পোর্ট এর মাধ্যমে কতটুকু ডাটা পাঠানো হয়েছে তা দেখে। আমরা `Serial.println("Hello World");` কমান্ডটির মাধ্যমে কতটুকু ডাটা পাঠানো হয়েছে তা মনিটর করতে পারবো।

১. ভি এস কোড command palette ওপেন করি

২. `PlatformIO Serial` টাইপ করি serial monitor অপশনটি খুঁজে পাওয়া জন্য, সিলেক্ট *PlatformIO: Serial Monitor*

   ![The PlatformIO Serial Monitor option in the command palette](../../../../images/vscode-platformio-serial-monitor-command-palette.png)

   এখন একটি নতুন টার্মিনাল ওপেন হবে যেখানে সিরিয়াল পোর্টের মাধ্যমে যত ডাটা পাঠানো হয়েছে তা দেখা যাবে:

   ```output
   > Executing task: platformio device monitor <
    
   --- Available filters and text transformations: colorize, debug, default, direct, hexlify, log2file, nocontrol, printable, send_on_enter, time
   --- More details at http://bit.ly/pio-monitor-filters
   --- Miniterm on /dev/cu.usbmodem101  9600,8,N,1 ---
   --- Quit: Ctrl+C | Menu: Ctrl+T | Help: Ctrl+T followed by Ctrl+H ---
   Hello World
   Hello World
   ```

   serial monitor এ প্রতি ৫ সেকেন্ডে `Hello World` প্রিন্ট হবে।

> 💁 আমরা উক্ত কোডটি [code/wio-terminal](../code/wio-terminal) ফোল্ডারে খুঁজে পাবো। 

😀 আমাদের 'হ্যালো ওয়ার্ল্ড' লেখাটি সফল হলো!!
