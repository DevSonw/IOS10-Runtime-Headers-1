//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString, NSString, _PLDescriptionStyle;

@interface PLDescriptionBuilder : NSObject
{
    NSObject *_object;
    NSMutableString *_description;
    NSString *_separator;
    _PLDescriptionStyle *_style;
}

+ (id)plainMultiLineDescriptionBuilder;
+ (id)plainDescriptionBuilder;
+ (id)descriptionBuilderWithObject:(id)arg1;
@property(copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
- (id)build;
- (void)appendName:(id)arg1 integerValue:(long long)arg2;
- (void)appendName:(id)arg1 boolValue:(_Bool)arg2;
- (void)appendName:(id)arg1 object:(id)arg2;
- (void)dealloc;
- (id)initWithObject:(id)arg1 style:(long long)arg2;

@end

