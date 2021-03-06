//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAppleIDAuthenticationLimitedUIProvider-Protocol.h>
#import <AuthKit/CDPAuthProvider-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAnisetteData, AKDevice, CDPRecoveryController, NSArray, NSDictionary, NSNumber, NSString, NSUUID;
@protocol AKAnisetteServiceProtocol, CDPStateUIProvider, OS_dispatch_queue;

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, CDPAuthProvider, NSSecureCoding>
{
    id <CDPStateUIProvider> _cdpUiProvider;
    NSString *_generatedCode;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_deviceClass;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    struct __CFUserNotification *_activeSecondFactoryEntryPrompt;
    CDUnknownBlockType _secondFactoryEntryCompletion;
    NSObject<OS_dispatch_queue> *_secondFactorQueue;
    CDPRecoveryController *_recoveryController;
    AKDevice *_proxiedDevice;
    AKDevice *_companionDevice;
    NSDictionary *_recoveryInfo;
    _Bool _isProxyingForApp;
    _Bool _isPasswordEditable;
    _Bool _isUsernameEditable;
    _Bool _shouldAllowAppleIDCreation;
    _Bool _needsCredentialRecovery;
    _Bool _needsNewAppleID;
    _Bool _needsPasswordChange;
    _Bool _isTriggeredByNotification;
    _Bool _isEphemeral;
    _Bool _shouldOfferSecurityUpgrade;
    _Bool _shouldPromptForPasswordOnly;
    _Bool _shouldUpdatePersistentServiceTokens;
    _Bool _shouldPreventInteractiveAuth;
    _Bool _shouldForceInteractiveAuth;
    _Bool _shouldRequestShortLivedToken;
    _Bool _shouldRequestConfigurationInfo;
    _Bool _anticipateEscrowAttempt;
    _Bool _isFirstTimeLogin;
    NSString *_proxiedAppBundleID;
    NSUUID *_identifier;
    NSString *_passwordPromptTitle;
    NSString *_proxiedAppName;
    NSString *_password;
    unsigned long long _capabilityForUIDisplay;
    NSString *_shortLivedToken;
    NSString *_message;
    NSString *_username;
    long long _serviceType;
    NSString *_reason;
    NSString *_defaultButtonString;
    long long _maximumLoginAttempts;
    NSArray *_serviceIdentifiers;
    NSString *_DSID;
    NSString *_altDSID;
    NSDictionary *_httpHeadersForRemoteUI;
    id _clientInfo;
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
    NSNumber *_isAppleIDLoginEnabled;
    AKAnisetteData *_proxiedDeviceAnisetteData;
    AKAnisetteData *_companionDeviceAnisetteData;
    NSString *_displayString;
    NSString *_displayTitle;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(retain, nonatomic) AKAnisetteData *companionDeviceAnisetteData; // @synthesize companionDeviceAnisetteData=_companionDeviceAnisetteData;
@property(retain, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData; // @synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData;
@property(nonatomic, setter=setFirstTimeLogin:) _Bool isFirstTimeLogin; // @synthesize isFirstTimeLogin=_isFirstTimeLogin;
@property(nonatomic) _Bool anticipateEscrowAttempt; // @synthesize anticipateEscrowAttempt=_anticipateEscrowAttempt;
@property(nonatomic) _Bool shouldRequestConfigurationInfo; // @synthesize shouldRequestConfigurationInfo=_shouldRequestConfigurationInfo;
@property(nonatomic) _Bool shouldRequestShortLivedToken; // @synthesize shouldRequestShortLivedToken=_shouldRequestShortLivedToken;
@property(copy, nonatomic, setter=setAppleIDLoginEnabled:) NSNumber *isAppleIDLoginEnabled; // @synthesize isAppleIDLoginEnabled=_isAppleIDLoginEnabled;
@property(copy, nonatomic) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
@property(nonatomic) _Bool shouldForceInteractiveAuth; // @synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth;
@property(nonatomic) _Bool shouldPreventInteractiveAuth; // @synthesize shouldPreventInteractiveAuth=_shouldPreventInteractiveAuth;
@property(nonatomic) _Bool shouldUpdatePersistentServiceTokens; // @synthesize shouldUpdatePersistentServiceTokens=_shouldUpdatePersistentServiceTokens;
@property(nonatomic) _Bool shouldPromptForPasswordOnly; // @synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly;
@property(nonatomic) _Bool shouldOfferSecurityUpgrade; // @synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade;
@property(retain, nonatomic) id clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy, nonatomic) NSDictionary *httpHeadersForRemoteUI; // @synthesize httpHeadersForRemoteUI=_httpHeadersForRemoteUI;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(nonatomic) _Bool isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(copy, nonatomic) NSArray *serviceIdentifiers; // @synthesize serviceIdentifiers=_serviceIdentifiers;
@property(nonatomic) long long maximumLoginAttempts; // @synthesize maximumLoginAttempts=_maximumLoginAttempts;
@property(copy, nonatomic) NSString *defaultButtonString; // @synthesize defaultButtonString=_defaultButtonString;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic, setter=setTriggeredByNotification:) _Bool isTriggeredByNotification; // @synthesize isTriggeredByNotification=_isTriggeredByNotification;
@property(nonatomic) _Bool needsPasswordChange; // @synthesize needsPasswordChange=_needsPasswordChange;
@property(nonatomic) _Bool needsNewAppleID; // @synthesize needsNewAppleID=_needsNewAppleID;
@property(nonatomic) _Bool needsCredentialRecovery; // @synthesize needsCredentialRecovery=_needsCredentialRecovery;
@property(nonatomic) _Bool shouldAllowAppleIDCreation; // @synthesize shouldAllowAppleIDCreation=_shouldAllowAppleIDCreation;
@property(nonatomic) _Bool isUsernameEditable; // @synthesize isUsernameEditable=_isUsernameEditable;
@property(copy) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) id <CDPStateUIProvider> cdpUiProvider; // @synthesize cdpUiProvider=_cdpUiProvider;
@property(copy, nonatomic, setter=_setMessage:) NSString *_message; // @synthesize _message;
@property(copy, nonatomic, setter=_setShortLivedToken:) NSString *_shortLivedToken; // @synthesize _shortLivedToken;
@property(nonatomic) _Bool _isPasswordEditable; // @synthesize _isPasswordEditable;
@property(copy, nonatomic, setter=_setPassword:) NSString *_password; // @synthesize _password;
@property(copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName; // @synthesize _proxiedAppName;
@property(copy, nonatomic) NSString *_passwordPromptTitle; // @synthesize _passwordPromptTitle;
@property(readonly, nonatomic) NSUUID *_identifier; // @synthesize _identifier;
@property(copy, nonatomic, setter=_setProxiedAppBundleID:) NSString *_proxiedAppBundleID; // @synthesize _proxiedAppBundleID;
@property(nonatomic, setter=_setProxyingForApp:) _Bool _isProxyingForApp; // @synthesize _isProxyingForApp;
- (void).cxx_destruct;
- (id)_secondFactorQueue;
- (void)_handleSecondFactorCodeEntry;
- (void)_stopListeningForSecondFactorCodeEntryNotification;
- (void)_startListeningForSecondFactorCodeEntryNotification;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissICSCRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)_mapICSCRecoveryResultsToAuthKit:(id)arg1;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(CDUnknownBlockType)arg2;
- (void)presentICSCRecoveryUIWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) AKDevice *companionDevice;
@property(copy, nonatomic) AKDevice *proxiedDevice;
@property(copy, nonatomic) NSString *serviceIdentifier;
@property(readonly, nonatomic) unsigned long long _capabilityForUIDisplay; // @synthesize _capabilityForUIDisplay;
@property(readonly, nonatomic) NSString *_detailedDescription;
- (void)_updateWithValuesFromContext:(id)arg1;
- (id)_sanitizedCopy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSString *generatedCode;
@property(copy, nonatomic) NSString *deviceEnclosureColor;
@property(copy, nonatomic) NSString *deviceColor;
@property(copy, nonatomic) NSString *deviceClass;
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

