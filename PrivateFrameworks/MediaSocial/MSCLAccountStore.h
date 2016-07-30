//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSMutableDictionary, SKUIMediaSocialAuthor;

@interface MSCLAccountStore : NSObject
{
    ACAccountStore *_accountStore;
    SKUIMediaSocialAuthor *_author;
    NSMutableDictionary *_externalServices;
}

@property(readonly, nonatomic) SKUIMediaSocialAuthor *author; // @synthesize author=_author;
- (void).cxx_destruct;
- (void)_handleAccountStoreDidChange:(id)arg1;
- (id)_facebookAppId;
- (void)verifyUserName:(id)arg1 password:(id)arg2 serviceIdentifier:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (_Bool)saveAccount:(id)arg1;
- (void)requestAccessToAccountForServiceIdentifier:(id)arg1 permissions:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)removeAccount:(id)arg1;
- (void)registerExternalDestination:(id)arg1 forAccount:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)permissionForServiceIdentifier:(id)arg1;
- (id)createAccountForServiceIdentifier:(id)arg1 error:(id *)arg2;
- (id)accountForServiceIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithAuthor:(id)arg1;

@end
