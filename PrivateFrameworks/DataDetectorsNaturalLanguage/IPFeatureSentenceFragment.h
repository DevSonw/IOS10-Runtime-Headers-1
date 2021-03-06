//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPFeatureSentenceFragment : NSObject
{
    unsigned long long _clusterType;
    double _probability_None;
    double _probability_Rejection;
    double _probability_Proposal;
    double _probability_Confirmation;
    struct _NSRange _range;
}

+ (id)fragmentWithRange:(struct _NSRange)arg1 clusterType:(unsigned long long)arg2;
@property double probability_Confirmation; // @synthesize probability_Confirmation=_probability_Confirmation;
@property double probability_Proposal; // @synthesize probability_Proposal=_probability_Proposal;
@property double probability_Rejection; // @synthesize probability_Rejection=_probability_Rejection;
@property double probability_None; // @synthesize probability_None=_probability_None;
@property unsigned long long clusterType; // @synthesize clusterType=_clusterType;
@property struct _NSRange range; // @synthesize range=_range;
- (id)description;
@property(readonly, nonatomic) unsigned long long mainPolarity;

@end

