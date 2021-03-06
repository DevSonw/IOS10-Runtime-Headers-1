//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSError, NSString;

@interface MusicTermsUpdateOperation : SSVComplexOperation
{
    NSError *_error;
    _Bool _hasAcceptedLatestTerms;
    unsigned long long _latestStoreTermsVersion;
    NSString *_termsContentText;
    unsigned long long _acceptedStoreTermsVersion;
    NSString *_termsContext;
}

@property(readonly, nonatomic) unsigned long long latestStoreTermsVersion; // @synthesize latestStoreTermsVersion=_latestStoreTermsVersion;
@property(readonly, copy, nonatomic) NSString *termsContext; // @synthesize termsContext=_termsContext;
@property(readonly, nonatomic) unsigned long long acceptedStoreTermsVersion; // @synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion;
- (void).cxx_destruct;
- (_Bool)_runRequestWithTermsCheckURL:(id)arg1 allowingAuthentication:(_Bool)arg2 returningError:(id *)arg3 termsContentText:(id *)arg4 hasAcceptedLatestTerms:(_Bool *)arg5 latestStoreTermsVersion:(unsigned long long *)arg6;
- (_Bool)_authenticateReturningError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *termsContentText;
@property(readonly, nonatomic) _Bool hasAcceptedLatestTerms;
- (id)error;
- (void)main;
- (id)initWithAcceptedStoreTermsVersion:(unsigned long long)arg1 termsContext:(id)arg2;

@end

