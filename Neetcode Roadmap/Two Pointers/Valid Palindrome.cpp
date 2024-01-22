{\rtf1\ansi\ansicpg1252\cocoartf2758
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;}
{\colortbl;\red255\green255\blue255;\red70\green137\blue204;\red30\green30\blue30;\red202\green202\blue202;
\red67\green192\blue160;\red212\green214\blue154;\red140\green211\blue254;\red89\green138\blue67;\red167\green197\blue152;
\red183\green111\blue179;}
{\*\expandedcolortbl;;\cssrgb\c33725\c61176\c83922;\cssrgb\c15686\c15686\c15686;\cssrgb\c83137\c83137\c83137;
\cssrgb\c30588\c78824\c69020;\cssrgb\c86275\c86275\c66667;\cssrgb\c61176\c86275\c99608;\cssrgb\c41569\c60000\c33333;\cssrgb\c70980\c80784\c65882;
\cssrgb\c77255\c52549\c75294;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 class\cf4 \strokec4  \cf5 \strokec5 Solution\cf4 \strokec4  \{\cb1 \
\cf2 \cb3 \strokec2 public:\cf4 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf4 \cb3     \cf2 \strokec2 bool\cf4 \strokec4  \cf6 \strokec6 isPalindrome\cf4 \strokec4 (\cf5 \strokec5 string\cf4 \strokec4  \cf7 \strokec7 s\cf4 \strokec4 ) \{\cb1 \
\pard\pardeftab720\partightenfactor0
\cf8 \cb3 \strokec8         //Duo Character Pass\cf4 \cb1 \strokec4 \
\pard\pardeftab720\partightenfactor0
\cf4 \cb3         \cf2 \strokec2 int\cf4 \strokec4  l = \cf9 \strokec9 0\cf4 \strokec4 ;\cb1 \
\cb3         \cf2 \strokec2 int\cf4 \strokec4  r = \cf7 \strokec7 s\cf4 \strokec4 .\cf6 \strokec6 size\cf4 \strokec4 ()-\cf9 \strokec9 1\cf4 \strokec4 ;\cb1 \
\
\cb3         \cf10 \strokec10 while\cf4 \strokec4  (l<=r)\cb1 \
\cb3         \{\cb1 \
\cb3             \cf10 \strokec10 if\cf4 \strokec4 (!\cf6 \strokec6 isalnum\cf4 \strokec4 (\cf7 \strokec7 s\cf4 \strokec4 [l]))\{\cb1 \
\cb3                 l++;\cb1 \
\cb3                 \cf10 \strokec10 continue\cf4 \strokec4 ;\cb1 \
\cb3             \}\cb1 \
\cb3             \cf10 \strokec10 if\cf4 \strokec4 (!\cf6 \strokec6 isalnum\cf4 \strokec4 (\cf7 \strokec7 s\cf4 \strokec4 [r]))\{\cb1 \
\cb3                 r--;\cb1 \
\cb3                 \cf10 \strokec10 continue\cf4 \strokec4 ;\cb1 \
\cb3             \}\cb1 \
\cb3             \cf10 \strokec10 if\cf4 \strokec4 (\cf6 \strokec6 tolower\cf4 \strokec4 (\cf7 \strokec7 s\cf4 \strokec4 [l]) != \cf6 \strokec6 tolower\cf4 \strokec4 (\cf7 \strokec7 s\cf4 \strokec4 [r]))\{\cb1 \
\cb3                 \cf10 \strokec10 return\cf4 \strokec4  \cf2 \strokec2 false\cf4 \strokec4 ;\cb1 \
\cb3             \}\cb1 \
\cb3             \cf10 \strokec10 else\cf4 \cb1 \strokec4 \
\cb3             \{\cb1 \
\cb3                 l++;\cb1 \
\cb3                 r--;\cb1 \
\cb3             \}\cb1 \
\cb3         \}\cb1 \
\cb3         \cf10 \strokec10 return\cf4 \strokec4  \cf2 \strokec2 true\cf4 \strokec4 ;\cb1 \
\cb3     \}\cb1 \
\cb3 \};\cb1 \
}