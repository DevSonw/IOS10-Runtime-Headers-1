//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSDictionary;

@interface SFCustomFeedback : SFFeedback
{
    unsigned long long _feedbackType;
    NSDictionary *_jsonFeedback;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *jsonFeedback; // @synthesize jsonFeedback=_jsonFeedback;
@property(nonatomic) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2;

@end
