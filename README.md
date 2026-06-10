# Koi Mini Mp3 Player!
A friendly fish shaped Mp3 player, that sings a tune to cheer you up :)


<img width="800" height="700" alt="image" src="https://github.com/user-attachments/assets/a00cd8c8-dba6-4e69-ab82-98c6d0104382" />




I came up with this idea when I came across creaters making projects that incorporated audio, and since I don't have as much experience with electrical projects, I thought this would be a fun and educational endeavor. When thinking over what cute designs and shapes I could make this, I became inspired by the friendly koi currency mascot used by hackclub's **fallout** program! I made this project because I wanted to learn more about complex electronics projects, as well as creating something practical that I can use day to day, and I listen to music all the time! And thus, here we are. This will be a helpful and cute tool for listening to tunes on the go, especially when I dont have access to spotify at school hahahaha (i'm **not** crying) (｡T ω T｡)

Some special things I did include making a more complex pcb than I have ever worked with before, along with not following a guided electronics project, so I kinda had to be more independent with troubleshooting and just making decsiions about my own project. In order to use this device, navigate through with a simple screen display to play songs stored on a micro sd card, along using right, left, and select buttons! It very simple to use and assemble. 

# CAD ScreenShots

<img width="1000" height="600" alt="Screenshot 2026-06-03 174017" src="https://github.com/user-attachments/assets/c3ee901b-1757-4777-92d5-77be0b7a75b7" />

<table>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/08f53b1f-319d-4e50-8958-fba41f2a1926" width="300">
    </td>
    <td>
      <img src="https://github.com/user-attachments/assets/8fb7f56f-6eab-44c9-bc9d-51c856697ca6" width="300">
    </td>
    <td>
      <img src="https://github.com/user-attachments/assets/0567a05b-0c2b-423c-a60a-f969874097a2" width="300">
 width="300">
    </td>
  </tr>
</table>

CAD Notes:
- Arduino model in CAD does not match up with footrpint or irl, trust the footprint. it was just the best 3d model I could find.
- This CAD took surprisingly long! It was difficult for me to create a case that fufilled all my criteria, including space, aesthetics, and easy access to the pcb for simple troubleshooting. I ended up going with this design, but not after making several rough drafts of potential cases. I'm happy with this one, as it includes snap fit joints, a hole for the headphone jack, and is overall super cute :)

# PCB ScreenShots

<table>
  <tr>
    <td rowspan="2">
      <img src="https://github.com/user-attachments/assets/0eb056d6-b8f1-48b4-86e8-395ea7206163" />
    </td>
    <td>
      <img src="https://github.com/user-attachments/assets/92546d10-c9a0-4284-980f-e15bc191c5d1" />
    </td>
  </tr>
  <tr>
    <td>
      <img src="https://github.com/user-attachments/assets/6a6e23f6-e1cb-4744-8cdc-e45ce6a8ba88" />
    </td>
  </tr>
</table>

PCB Notes:
- The PCB took me a **while**. It took 6 versions to come up with the final draft. The biggest difficulty was deciding a layout that would be easy to work with and troubleshoot, along with research into which components I should use. I had to learn how to do a lot of new things in KiCad, including making my own symbols!
- For structure, I created a blank PCB with the same shape attached to the bottom of the real pcb with brass standoffs. I found in my research that this is common when creating mp3 players, along with custom PCBs in general. (sse below)

<td align="center">
 <img width="800" height="500" alt="image" src="https://github.com/user-attachments/assets/a39c84a3-0160-4217-ab65-45ce0235e0f5" />
</td>

## Schematic ScreenShot

<img width="800" height="500" alt="Screenshot 2026-06-01 225005" src="https://github.com/user-attachments/assets/25549626-ebec-4dc3-b5bc-de32f5527da3" />

# Zine !!

<img width="683" height="969" alt="image" src="https://github.com/user-attachments/assets/1883262f-5ad7-4ff5-8a0c-663173c134b6" />

# Build Guide

Assembly for this Fish MP3 Player isn't too complicated. To start off, once components have arrived, be sure that your code is ready. When assembling components, I plan on starting out with a breadboard to test firmware before soldering, and be sure to secure the bottom blank pcb with standoffs. In the meantime, get the 3d printer started on the case top, bottom, and fins! The snap fit joints should make the case easy to work with, so it isnt hard to access the pcb.

## Firmware

I customized code for the display from Pcbcupid soundpod and used a butmap converter to display the images! Download whatever songs you'd like to be played on a micro sd card, and program to navigate through the files with the Pcbcupid reference mentioned earlier.

## BOM

| Item | Purpose | Price | Source | Link |
|---|---|---|---|---|
| Arduino Pro Mini | Microcontroller | $1.66 | AliExpress | https://www.aliexpress.us/item/3256809225264759.html?spm=a2g0o.productlist.main.8.1154d373WriJct&aem_p4p_detail=202606041608381516129101675990000653758&algo_pvid=17235d99-b4bf-4eae-8822-effcf9c3d7d6&algo_exp_id=17235d99-b4bf-4eae-8822-effcf9c3d7d6-7&pdp_ext_f=%7B%22order%22%3A%22975%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%213.01%210.99%21%21%2120.29%216.68%21%402103212317806145181028917e7e75%2112000049016718294%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A5ad2bf3%3Bm03_new_user%3A-29895%3BpisId%3A5000000207178484&curPageLogUid=sAWeRD3Rte4l&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005009411579511%7C_p_origin_prod%3A&search_p4p_id=202606041608381516129101675990000653758_2&_gl=1*1og3qna*_gcl_aw*R0NMLjE3ODA1ODg3MzAuQ2p3S0NBand4SVRSQmhCWUVpd0E2bVptN1gyMmhLYmcxNEFXTzJqMzVocGFuYXA0Yjk1M2prS2RFd1JhSVdJU2VTWEpSTl9ReDRidUZSb0NfRDRRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3ODA1ODg3MzAuQ2p3S0NBand4SVRSQmhCWUVpd0E2bVptN1gyMmhLYmcxNEFXTzJqMzVocGFuYXA0Yjk1M2prS2RFd1JhSVdJU2VTWEpSTl9ReDRidUZSb0NfRDRRQXZEX0J3RQ..*_gcl_au*MTczMjcyMzY2MS4xNzgwMDc1MDcx*_ga*OTI3ODgwMTQ2MTkzMTUxLjE3NjY3MjAwNzk4MjQ.*_ga_VED1YSGNC7*czE3ODA2MTQ1MTkkbzEwJGcwJHQxNzgwNjE0NTE5JGo2MCRsMCRoMA.. |
| DFPlayer Mini | Audio Module | $0.73 | AliExpress | https://www.aliexpress.us/item/3256806817772564.html?src=google&src=google&albch=shopping&acnt=708-803-3821&isdl=y&slnk=&plac=&mtctp=&albbt=Google_7_shopping&aff_platform=google&aff_short_key=UneMJZVf&gclsrc=aw.ds&albagn=888888&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=en3256806817772564&ds_e_product_merchant_id=5347193707&ds_e_product_country=US&ds_e_product_language=en&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=19558607238&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=1&gad_campaignid=19566915268&gbraid=0AAAAAD6I-hH4f_RBPgk4-7deK7YYKAQBI&gclid=Cj0KCQjw2_TQBhCnARIsAF3-XhwdQfZYBiIl5K6vnZvOP9pSz2Zze0GxJHst8n-6nMQRg2g9PXQ3k2kaAlETEALw_wcB&gatewayAdapt=glo2usa |
| 1.3 in OLED | Display Screen | $0.99 | AliExpress | https://www.aliexpress.us/item/3256809997650807.html?spm=a2g0o.detail.pcDetailTopMoreOtherSeller.1.44a4LJzILJzIhe&gps-id=pcDetailTopMoreOtherSeller&scm=1007.40050.354490.0&scm_id=1007.40050.354490.0&scm-url=1007.40050.354490.0&pvid=19e49a3f-77e4-4718-aa90-6f56865ac08a&_t=gps-id%3ApcDetailTopMoreOtherSeller%2Cscm-url%3A1007.40050.354490.0%2Cpvid%3A19e49a3f-77e4-4718-aa90-6f56865ac08a%2Ctpp_buckets%3A668%232846%238110%231995&pdp_ext_f=%7B%22order%22%3A%22149%22%2C%22eval%22%3A%221%22%2C%22sceneId%22%3A%2230050%22%2C%22fromPage%22%3A%22recommend%22%7D&pdp_npi=6%40dis%21USD%219.21%210.99%21%21%2161.95%216.64%21%402101e81117803697190038799ea8cd%2112000051437252681%21rec%21US%21%21ABX%211%210%21n_tag%3A-29910%3Bd%3A3d07d826%3Bm03_new_user%3A-29895%3BpisId%3A5000000207178484&utparam-url=scene%3ApcDetailTopMoreOtherSeller%7Cquery_from%3A%7Cx_object_id%3A1005010183965559%7C_p_origin_prod%3A |
| TRS Female Headphone Jack | Audio output | $1.15 | DigiKey | https://shorturl.at/xDjAV | 
| 3.7 V Battery | Power | $4.18 | AliExpress | https://www.aliexpress.us/item/3256808681500642.html?spm=a2g0o.productlist.main.15.4bb1241e7b8vlw&algo_pvid=f988d292-1588-4233-b59b-e6f268a99bd2&algo_exp_id=f988d292-1588-4233-b59b-e6f268a99bd2-14&pdp_ext_f=%7B%22order%22%3A%22803%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%2112.82%214.57%21%21%2186.37%2130.74%21%40210328d417805887373364721ef74a%2112000047018637633%21sea%21US%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A3d07d826%3Bm03_new_user%3A-29895%3BpisId%3A5000000208023469&curPageLogUid=Fx9M4p2WWRIq&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008867815394%7C_p_origin_prod%3A |
| 2 pin JST Battery Connector | Battery Connector | $3.90 | Aliexpress| https://shorturl.at/0xLe1 |
| Micro SD Card | Store songs | $1.13 | AliExpress | https://www.aliexpress.com/ssr/300000512/BundleDeals2?spm=a2g0o.productlist.main.1.63ad5328tH0Kby&productIds=1005010775019515%3A12000053469023885&pha_manifest=ssr&_immersiveMode=true&disableNav=YES&sourceName=SEARCHProduct&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005010775019515%7C_p_origin_prod%3A&pvid=63c826e6-f28e-4320-818e-ceaa5da16f6c&_gl=1*17p9z8x*_gcl_aw*R0NMLjE3ODA1ODg3MzAuQ2p3S0NBand4SVRSQmhCWUVpd0E2bVptN1gyMmhLYmcxNEFXTzJqMzVocGFuYXA0Yjk1M2prS2RFd1JhSVdJU2VTWEpSTl9ReDRidUZSb0NfRDRRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3ODA1ODg3MzAuQ2p3S0NBand4SVRSQmhCWUVpd0E2bVptN1gyMmhLYmcxNEFXTzJqMzVocGFuYXA0Yjk1M2prS2RFd1JhSVdJU2VTWEpSTl9ReDRidUZSb0NfRDRRQXZEX0J3RQ..*_gcl_au*MTczMjcyMzY2MS4xNzgwMDc1MDcx*_ga*OTI3ODgwMTQ2MTkzMTUxLjE3NjY3MjAwNzk4MjQ.*_ga_VED1YSGNC7*czE3ODA1ODg3MjAkbzkkZzEkdDE3ODA1ODg4NDEkajIyJGwwJGgw |
| Micro Push Buttons | Inputs | $0.33 | Same Sky | https://www.sameskydevices.com/product/switches/tactile-switches/ts24-62-14-bl-250-smt-tr-67 |
| Custom Tactile Buttons | Comfort | $0 | 3D Printed |
| Custom Koi Case | Aesthetics | $0 | 3D Printed |
| Breadboard | testing | $0.55 | AliExpress | https://shorturl.at/7gDRe |
| Custom PCB | PCB | $5.30 | JLCPCB |
| Brass PCB standoffs | Supports structure | $0.99 | AliExpress | https://shorturl.at/dPENK |
| Soldering Iron | Assembly | $0 | Owned |
| 3D Printer | Case Manufacturing | $0 | Owned |
| Wired Headphones | Audio Output | $0 | Owned |
|  |  |  |  | **Subtotal: $20.91 USD**  |


## Notes and Acknowledgments
- Thank you to **Hackclub** and the **Fallout team** for making this project possible! It's because of you that I was inspired and able to make this project!
- Thank you to the user Digiicam for helpful inspo for wiring and components!
- Thank you to Pcbcupid for simple customizable firmware!




