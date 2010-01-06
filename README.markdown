Information about this fork
===========================

This fork is a repackaging and clean up of the [lukele/GPGMail-SL][lukele] repository,
updated for Mail 4.2 as shipped with Mac OS X 10.6.2, and made it work with MacPorts
shipped GPG.


How to compile GPGMail?
=======================

GPGMail sources come with a copy of the official MacGPGME source code, checked 
out Wed Jan  6 17:19:56 CET 2010 and referring r1861 from the upstream SVN
repository.

GPGMail assumes that you are a MacPorts user, and have installed the 

    gpgme @1.2.0_0
    libgpg-error @1.7_0

packages.

You need to build the MacGPGME framework first, by entering the MacGPGME
directory and issuing the <code>xcodebuild -configuration Release</code>
command.

Then you need to build GPGMail itself, by entering the parent directory
and issuing the <code>xcodebuild -configuration Release</code> command
again.

In a nutshell:

   git clone git://github.com/vjt/GPGMail-SL.git
   cd GPGMail-SL/MacGPGME
   xcodebuild -configuration Release
   cd ..
   xcodebuild -configuration Release


GPGMail will be installed automagically into your ~/Library/Mail/Bundles
directory. Be sure to restart Mail to start GPG-ing with your friends :-).

You can, as well, use XCode to build both the projects, change the active
configurations, debug, develop, etc :-).


Open issues
===========

 * The ones open in the upstream sources, this fork does not contain any
   code modification at all: it's just a repackaging.
 * Lots of warnings in the code that should be fixed
 * The MacGPGME framework copies the whole /opt/local/share/locale
   directory into the build directory, and this is not the best of the
   solutions to using GetText
 * GPGMail build script "Update MacGPGME Install Name" currently copies
   the compiled MacGPGME framework using cp(1) and not with a CopyFiles
   XCode action, because I'm not very fond of XCode and didn't work out
   on how to make it work correctly
 * The GPGMail project should handle the dependant MacGPGME project in
   order not to require a double "xcodebuild" invocation.

If you have some spare time to fix these issues, feel free to fork the
repository and send me a pull request :-).


Further information
===================

Be sure to check the original GPGMail home page: [http://sente.ch/gpgmail][home]
The SourceForge.net MacGPG project: [http://sourceforge.net/projects/macgpg/][sf]
The original rca repository: [http://github.com/rca/GPGMail/][rca] and the one
from which this one was forked from: [http://github.com/lukele/GPGMail/][lukele]

Also check out the DeveloperInfo.txt file, the HISTORY one, and so on.

Happy PGP-ing,

 - vjt@openssl.it

[lukele]: http://github.com/lukele/GPGMail/
[rca]: http://github.com/rca/GPGMail/
[sf]: http://sourceforge.net/projects/macgpg/
[home]: http://sente.ch/gpgmail
