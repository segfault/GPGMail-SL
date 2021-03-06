/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTextAttachment.h"

#import "NSCopying-Protocol.h"

@class CachingABRecord, NSFont, NSString;

@interface AddressAttachment : NSTextAttachment <NSCopying>
{
    NSString *address;
    NSString *name;
    int type;
    CachingABRecord *addressBookRecord;
    BOOL isInitializing;
    BOOL suppressNotifications;
    BOOL isSenderAddress;
    BOOL isOriginalSenderAddress;
    BOOL knownToHaveNoRecord;
    BOOL shouldDisplayFullAddress;
    NSFont *preferredFont;
}

+ (void)initialize;
+ (void)getRecordsForAddresses:(id)arg1;
+ (id)attributesForType:(int)arg1;
+ (void)resetAttributes;
+ (BOOL)addressIsExternal:(id)arg1;
+ (id)colorForExternalDomain;
+ (int)addressDisplayMode;
+ (void)setAddressDisplayMode:(int)arg1;
- (id)initWithAddress:(id)arg1 record:(id)arg2 type:(int)arg3;
- (id)initWithAddress:(id)arg1 record:(id)arg2 type:(int)arg3 showComma:(BOOL)arg4;
- (id)initWithFileWrapper:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)adjustFontSizeBy:(long)arg1;
- (id)drawingAttributes;
- (BOOL)isInitializing;
- (void)setAddress:(id)arg1;
- (id)address;
- (id)pasteboardString;
- (id)nonemptyAddress;
- (void)setName:(id)arg1;
- (id)name;
- (id)formattedAddress;
- (id)quotedFormattedAddress;
- (id)nameOrAddressForDisplay;
- (id)addressDomain;
- (void)writeToPasteboard:(id)arg1;
- (id)vCardString;
- (id)vCardRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)hasToolTip;
- (id)toolTip;
- (int)type;
- (void)addressDisplayModeChanged:(id)arg1;
- (void)setAddressBookRecord:(id)arg1;
- (id)addressBookRecord;
- (void)removeAddressBookRecord;
- (void)setKnownToHaveNoRecord:(BOOL)arg1;
- (BOOL)knownToHaveNoRecord;
- (BOOL)isInAddressBook;
- (BOOL)isSenderAddress;
- (void)setIsSenderAddress;
- (BOOL)isOriginalSenderAddress;
- (void)setIsOriginalSenderAddress;
- (void)domainForMatchingDidChange;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void)setRightSideHasSelectedText:(BOOL)arg1;
- (void)setRightSideHasSelectedAtom:(BOOL)arg1;
- (void)setLeftSideHasSelection:(BOOL)arg1;
- (id)attachmentCell;
- (void)onlinePresenceChanged:(id)arg1;
- (void)antialiasingSettingsChanged:(id)arg1;

@end

