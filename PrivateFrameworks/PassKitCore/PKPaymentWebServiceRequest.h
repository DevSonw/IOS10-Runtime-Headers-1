//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRequest : NSObject
{
    _Bool _useLegacyFormat;
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

+ (id)_HTTPBodyWithDictionary:(id)arg1;
+ (id)authHeaderWithAccount:(id)arg1;
@property(retain, nonatomic) id <PKPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;
@property(nonatomic) _Bool useLegacyFormat; // @synthesize useLegacyFormat=_useLegacyFormat;
- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 account:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1 account:(id)arg2;
- (id)_murlRequestWithURL:(id)arg1;
- (void)signAndFinalizeRequest:(id)arg1 httpBodyContents:(id)arg2 webService:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
