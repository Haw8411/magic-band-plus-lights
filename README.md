# Disney MagicBand + Lights at home

Welcome!
This Github repository hosts the open source files for the MagicBand + Light commands that I have compiled into a app for the Flipper Zero, so you can have your own light show at home!

This will detail:
- How you can set it up
- The details of it
- What each command means
- How to get it on Andriod if you don't have a FZ

And other information of course!

# Part 1: What is this app anyway?

At Disney World or Disney Land, they use something called **bluetooth beacons**. That basically is when it is advertising a BLE command that the MagicBands pick up.
In that command, the MagicBand is told multiple things:
- What the type of lights it should show (Color pallate, rotating, single, dual pallate & more)
- What the color of the lights should be
- Vibration
- How long should it stay on (if it fades)

This app holds all *current* known MagicBand BLE Commands.

# Part 2: How can I install it?
There is 2 ways - both require downloading the .fap from the releases on this repository.

This app can be put **wherever** you want in the Flipper's directory, but since it is a Bluetooth application, I reccomend you put it in the Bluetooth folder.

You can put it in by 2 ways: qFlipper or the Flipper mobile app. 

# Android
"Well, I don't have a Flipper Zero, but you mentioned it working on a Android?"

It is VERY possible to get everything running & working on a Android - though, I am not going to make a Android application that hosts the commands
This means you will have to **manually** input the Bluetooth codes & add them.

*But how can I do that?*
It's fairly easy to setup - you only need one app: nRF Connect. You can download this from the Google Play store.

*Well, what do I do now?*
1. Open the application
2. Go to the Advertiser tab
3. Click the "+" button in the bottom right corner
4. Make the display name whatever you want
5. Keep all the options off, but add a record: Manufacturer Data
6. The Company ID is 0183
7. The "Data" is the Bluetooth code you get [from this website: ]([url](https://emcot.world/Disney_MagicBand%2B_Bluetooth_Codes))
8. I reccomend adding the "Trigger" first so you can ping the MagicBand.
9. That's it! Slide the toggle on, and you don't need to change any of the data there.

# Why don't the lights come on???

This can be due to multiple things - one specifically being the MagicBand off or it's battery is dead. You will need to turn it on/charge it for this to work.

*But it still doesn't work!*

Sometimes it takes a while to turn on. Especially with the Flipper. 

The best thing that I have noticed is to double tap it - when your spinning color comes up, start it (Flipper) or enable it (Android). That has been the "solution"

# Can I modify it & add my own hex codes that I found?

Yes! This project is open source and avalible to everyone, so feel free to do whatever.

# Where did you find all of the BLE codes?

There is a post on a website called emcot.world that has all of the codes that I have put in the app.

(https://emcot.world/Disney_MagicBand%2B_Bluetooth_Codes)

And that's it!



-# ChatGPT has helped a lot with the formation of the Flipper app, as I am fairly new to it.
-# Thank you to the person who made the emcot.world guide, it has been a BIG help!




