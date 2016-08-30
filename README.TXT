Blitz3D open source release!

Workspace and project files are in MSVC 6.0 format.

Ide and Debugger require MFC which is included with MSVC 6.0, but not with later free/express versions of MSVC.

You can grab the prebuilt free version of blitz3d from www.blitzbasic.com.

Steps to build:

1) Install freeimage241 into same dir as blitz3d: http://monkeycoder.co.nz/downloads/freeimage241.zip

2) Install fmodapi375win into same dir as blitz3d: http://www.fmod.org/files/public/fmodapi375win.zip

3) Open blitz3d workspace in MSVC 6.0.

4) Build project 'bblaunch' using config 'Win32 Blitz3D Release'.

5) Output files should end up in _release subdir.

6) Also copy fmodapi375win/api/fmod.dll to _release/bin.

7) Done?

Blitz3d is released under the zlib/libpng license.

The zlib/libpng License

Copyright (c) 2013 Blitz Research Ltd

This software is provided 'as-is', without any express or implied warranty. In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source distribution.

Compilation details
-------------------

http://www.blitzbasic.com/Community/post.php?topic=102907&post=1235490

>Tom	(Posted 1+ years ago) #1
>Note! VC 6 Standard edition doesn't come with the ability to compile the MFC stuff (it's missing some libs...), you'll need Enterprise or Pro (is there a Pro? Just guessing lol)
>You'll also need the DX7 SDK which is, luckily, still available here: http://www.steve-oh.com/blog/index.php/directx-70a-sdk-download/
>Unzip it somewhere.
>
>To add it to VC 6 ent. go to Tool > Options, select the Directories tab, here you need to make 2 entries, select 'Include Files' from the 'Show Directories for' drop down menu, and make a new entry. Click the 3 dots (...) to browse to your <DX7SDK>\INCLUDE folder and click ok.
>Now from the same drop down menu select 'Library Files', make a new entry, click the ... button, browse to your <DX7SDK>\LIB folder and click ok.
>
>IMPORTANT! For each of the two new DX7 entries you made, in their respective 'Directories' list, select it and move it to the top (use the up & down buttons next to the red X), otherwise you'll get some compiler errors because it won't see the SDK.
>Other than that, it compiles fine!
>
>Should have done this years ago, thanks Mark.


* The MSVC 6.0 editor is in Microsoft Visual Studio\Common\MSDev98\Bin\MSDEV.EXE
* Had to add AMSTRMID.LIB to bbruntime_dll project libraries.
* How to generate PDB debug info: https://blogs.msdn.microsoft.com/rickrain/2004/11/05/visual-c-6-0-how-do-i-create-symbols-files-pdb-for-release-builds/
* Optimization settings have been changed to "Optimize for speed".


Directory layout should be the following:

	fmodapi375win/
	freeimage241/
	blitz3d/
		blitz3d.dsw
	