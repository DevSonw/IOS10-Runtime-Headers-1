//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CVMLMetricLearning : NSObject
{
    struct shared_ptr<DML> mMetricLearningImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addFaceToMetric:(id)arg1 andParameters:(id)arg2 error:(id *)arg3;
- (id)initWithLearnedMetric:(id)arg1 cancellationSemaphore:(id)arg2 error:(id *)arg3;
- (id)initWithOptions:(id)arg1 cancellationSemaphore:(id)arg2 error:(id *)arg3;

@end
