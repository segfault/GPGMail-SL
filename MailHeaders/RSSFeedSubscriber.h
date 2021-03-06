/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class ActivityMonitor, NSString;

@interface RSSFeedSubscriber : NSObject
{
    int _state;
    NSString *_errorString;
    ActivityMonitor *_monitor;
}

+ (BOOL)isFeedURLString:(id)arg1;
+ (id)subscriber;
+ (id)keyPathsForValuesAffectingIsIdle;
+ (id)keyPathsForValuesAffectingIsFetching;
+ (id)keyPathsForValuesAffectingDidFail;
+ (id)keyPathsForValuesAffectingDidSucceed;
- (void)subscribeWithURLString:(id)arg1 title:(id)arg2 addToInbox:(BOOL)arg3 autodiscover:(BOOL)arg4 addToBookmarks:(BOOL)arg5;
- (void)subscribeWithURLStrings:(id)arg1 titles:(id)arg2 addToInbox:(BOOL)arg3 autodiscover:(BOOL)arg4 addToBookmarks:(BOOL)arg5 parent:(id)arg6;
- (void)dealloc;
- (void)cancel;
- (void)_updateState:(id)arg1 status:(id)arg2;
- (void)_workerUpdateState:(int)arg1 status:(id)arg2;
- (void)_workerSubscribeWithURLStrings:(id)arg1 titles:(id)arg2 addToInbox:(BOOL)arg3 autodiscover:(BOOL)arg4 addToBookmarks:(BOOL)arg5 parent:(id)arg6;
- (BOOL)isIdle;
- (BOOL)isFetching;
- (BOOL)didFail;
- (BOOL)didSucceed;
- (id)errorString;
- (void)setErrorString:(id)arg1;
- (int)state;
- (void)setState:(int)arg1;

@end

