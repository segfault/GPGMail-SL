/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSPopUpButtonCell.h"

@class NSCell;

@interface ToDoListPopUpButtonCell : NSPopUpButtonCell
{
    NSCell *textCell;
    NSCell *indicatorCell;
    BOOL _expanding;
    BOOL _hasKeyboardFocus;
    BOOL _hasMouseFocus;
}

- (id)initTextCell:(id)arg1 pullsDown:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)_toDoListPopUpButtonCellCommonInitWithString:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)hasFocus;
- (BOOL)hasKeyboardFocus;
- (void)setHasKeyboardFocus:(BOOL)arg1;
- (BOOL)hasMouseFocus;
- (void)setHasMouseFocus:(BOOL)arg1;
- (void)setLineBreakMode:(unsigned long)arg1;
- (void)setAlignment:(unsigned long)arg1;
- (void)setFont:(id)arg1;
- (void)setBackgroundStyle:(long)arg1;
- (void)setControlSize:(unsigned long)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)attributedTitle;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)indicatorRectForBounds:(struct CGRect)arg1;
- (void)drawTitleWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_indicatorImage;
- (void)drawBorderAndBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)menuForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)addTrackingAreasForView:(id)arg1 inRect:(struct CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(struct CGPoint)arg4;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;

@end

