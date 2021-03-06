//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface CTMessagePart : NSObject
{
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    NSString *_contentId;
    NSString *_contentLocation;
    NSData *_data;
}

@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *contentLocation; // @synthesize contentLocation=_contentLocation;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void)dealloc;
- (id)allContentTypeParameterNames;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)contentTypeParameterWithName:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;

@end

