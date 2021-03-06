/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSAttributedString, NSMutableArray, NSString;

@interface _WebComposeMessageContents : NSObject
{
    int sendFormat;
    NSAttributedString *plainText;
    NSString *topLevelHtmlString;
    NSMutableArray *attachmentsAndHtmlStrings;
    NSMutableArray *urlsForAttachmentsAndHtmlStrings;
    NSArray *_todoIDs;
}

- (void)dealloc;
- (void)addAttachmentOrHtmlString:(id)arg1 withURL:(id)arg2;
- (id)description;
- (id)todoIDs;
- (void)setTodoIDs:(id)arg1;
- (id)urlsForAttachmentsAndHtmlStrings;
- (void)setUrlsForAttachmentsAndHtmlStrings:(id)arg1;
- (id)attachmentsAndHtmlStrings;
- (void)setAttachmentsAndHtmlStrings:(id)arg1;
- (id)topLevelHtmlString;
- (void)setTopLevelHtmlString:(id)arg1;
- (id)plainText;
- (void)setPlainText:(id)arg1;
- (int)sendFormat;
- (void)setSendFormat:(int)arg1;

@end

