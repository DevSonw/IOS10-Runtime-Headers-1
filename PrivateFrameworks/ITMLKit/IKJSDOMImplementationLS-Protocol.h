//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMLSInput, IKDOMLSParser, IKDOMLSSerializer, NSString;

@protocol IKJSDOMImplementationLS <JSExport>
- (IKDOMLSInput *)createLSInput;
- (IKDOMLSSerializer *)createLSSerializer;
- (IKDOMLSParser *)createLSParser:(long long)arg1:(NSString *)arg2;
@end
