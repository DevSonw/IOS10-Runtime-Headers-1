//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@interface FCProxyOperation : FCOperation
{
    FCOperation *_underlyingOperation;
}

+ (id)proxyForOperation:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) FCOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
- (void).cxx_destruct;
- (void)_revisitQualityOfService;
- (void)_revisitNetworkPriority;
- (void)setQualityOfService:(long long)arg1;
- (void)setNetworkPriority:(long long)arg1;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;

@end

