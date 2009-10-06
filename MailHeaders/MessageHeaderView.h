/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTextView.h"

@class NSImage, NSMutableArray;

@interface MessageHeaderView : NSTextView
{
    NSMutableArray *trackingRectTags;
    NSImage *_backgroundImageCap;
    NSImage *_tilingBackgroundImage;
}

- (void)awakeFromNib;
- (void)dealloc;
- (void)_certificateSheetDidEnd:(id)arg1 returnCode:(long)arg2 contextInfo:(void *)arg3;
- (void)_securityButtonClicked:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)trackHeaderAddresses:(id)arg1 replacingPreviousAddresses:(BOOL)arg2;
- (void)addressAtomsWereUpdated:(id)arg1;
- (void)addressAttachmentSizeChanged:(id)arg1;
- (void)addressAppearanceChanged:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1 affinity:(unsigned long)arg2 stillSelecting:(BOOL)arg3;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)selectionRangeForProposedRange:(struct _NSRange)arg1 granularity:(unsigned long)arg2;
- (void)setTilingBackgroundImage:(id)arg1;
- (id)tilingBackgroundImage;
- (void)setBackgroundImageCap:(id)arg1;
- (id)backgroundImageCap;
- (struct CGRect)_cellFrameForAttachment:(id)arg1 atCharIndex:(long)arg2;
- (void)_removeCursorRects;
- (void)resetCursorRects;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)didChangeText;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)menuForEvent:(id)arg1;
- (id)attachmentForPoint:(struct CGPoint)arg1;
- (id)attachmentForEvent:(id)arg1;
- (id)undoManager;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;

@end
