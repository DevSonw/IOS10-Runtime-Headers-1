//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RPStoreInfo : NSObject
{
    NSString *_bundleID;
    NSString *_appName;
    NSString *_author;
    NSString *_itemURL;
    NSArray *_categories;
}

@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) NSString *itemURL; // @synthesize itemURL=_itemURL;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (id)dictionary;

@end

