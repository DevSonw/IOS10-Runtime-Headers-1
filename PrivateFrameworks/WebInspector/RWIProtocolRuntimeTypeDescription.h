//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolRuntimeTypeSet;

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject
{
}

@property(nonatomic) _Bool isTruncated;
@property(copy, nonatomic) NSArray *structures;
@property(retain, nonatomic) RWIProtocolRuntimeTypeSet *typeSet;
@property(copy, nonatomic) NSString *leastCommonAncestor;
@property(nonatomic) _Bool isValid;
- (id)initWithIsValid:(_Bool)arg1;

@end
