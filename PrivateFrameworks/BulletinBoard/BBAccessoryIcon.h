//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_imagesForContentSize;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *imagesForContentSize; // @synthesize imagesForContentSize=_imagesForContentSize;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)imageForContentSizeCategory:(id)arg1;
- (void)addImage:(id)arg1 forContentSizeCategory:(id)arg2;
- (id)init;

@end
