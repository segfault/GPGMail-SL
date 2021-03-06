/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "Quota.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSMutableArray;

@interface RemoteStoreQuota : Quota <NSTableViewDataSource, NSTableViewDelegate>
{
    NSButton *_showMessagesButton;
    NSMutableArray *_mailboxes;
    struct QuotaSimpleSortDescriptor _simpleSortDescs[3];
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)engineUpdated:(id)arg1;
- (void)showMessages:(id)arg1;
- (long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableShouldIncludeMailbox:(id)arg1;
- (id)_iconForMailboxUid:(id)arg1;
- (unsigned long)numberOfSortDescriptors;
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long)arg1;
- (void)syncSortDescriptors;
- (void)resortMailboxes;

@end

