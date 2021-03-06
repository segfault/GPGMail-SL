/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "AccountDetails.h"

@class NSButton, NSPopUpButton, NSTextField;

@interface EWSAccountDetails : AccountDetails
{
    NSPopUpButton *_messageCaching;
    NSTextField *_internalServerPath;
    NSTextField *_externalServerPath;
    NSTextField *_externalPortNumber;
    NSButton *_externalUseSSL;
    BOOL _warnedAboutCachingAndIndexing;
}

- (Class)accountClass;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (id)portFieldForSSLCheckBox:(id)arg1;
- (void)didDisplayTabViewItem:(id)arg1;
- (void)cachePolicyChanged:(id)arg1;
- (void)_confirmCacheChangeSheetEnded:(id)arg1 alertReturn:(long)arg2 context:(void *)arg3;

@end

