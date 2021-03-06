//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKCOAddress.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKCOIdAddress : TSKCOAddress
{
    NSString *mId;
}

+ (id)addressWithUUIDPath:(id)arg1;
+ (id)addressWithUUID:(id)arg1;
+ (id)idFromIdPath:(id)arg1;
+ (id)addressWithIdPath:(id)arg1;
+ (id)addressWithPath:(id)arg1;
+ (id)addressWithId:(id)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=mId;
- (void)saveToArchiver:(id)arg1 message:(struct Address *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Address *)arg2;
- (id)pathElement;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1 identifier:(id)arg2;

@end

