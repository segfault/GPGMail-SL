/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class Account, ActivityMonitor, AuthScheme, Connection, NSArray, NSString;

@interface AccountSetupValidator : NSObject
{
    NSArray *_attempts;
    Account *_account;
    Connection *_connection;
    AuthScheme *_preferredAuthScheme;
    ActivityMonitor *_validationActivity;
    NSString *_password;
    BOOL _usedSSL;
    BOOL _shouldContinueWithInsecurePassword;
    id <AccountSetupValidatorDelegate> _delegate;
}

+ (id)validatorWithAccount:(id)arg1 accountInfo:(id)arg2 delegate:(id)arg3;
- (id)_initWithAccount:(id)arg1 accountInfo:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)description;
- (void)continueWithInsecurePassword;
- (void)cancel;
- (void)_sendValidatorDidChangeState:(id)arg1;
- (void)_sendValidatorDidFail;
- (void)_sendValidatorDidFinish;
- (void)_updateState:(long)arg1;
- (BOOL)_connectIfNeeded;
- (void)_disconnect;
- (BOOL)_attemptInitialConnection;
- (BOOL)_attemptAuthentication;
- (void)_validate;
- (BOOL)usedSSL;
- (void)setUsedSSL:(BOOL)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)preferredAuthScheme;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)validationActivity;
- (void)setValidationActivity:(id)arg1;
- (id)connection;
- (void)setConnection:(id)arg1;
- (id)account;
- (void)setAccount:(id)arg1;
- (id)attempts;
- (void)setAttempts:(id)arg1;

@end

