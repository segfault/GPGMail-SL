/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSToolbar.h"

@interface MailToolbar : NSToolbar
{
    unsigned int _previousDisplayMode;
    int _temporaryItemTag;
    BOOL _stateIsTemporary;
    BOOL _previousVisible;
}

- (BOOL)_allowsSizeMode:(unsigned long)arg1;
- (void)setTemporaryDisplayMode:(unsigned long)arg1 visible:(BOOL)arg2 requiredItemTag:(long)arg3 identifier:(id)arg4;
- (void)revertTemporaryStateIfAny;
- (void)setDisplayMode:(unsigned long)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)insertItemWithItemIdentifier:(id)arg1 atIndex:(long)arg2;
- (void)removeItemAtIndex:(long)arg1;

@end

