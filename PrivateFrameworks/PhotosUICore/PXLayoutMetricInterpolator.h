//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject
{
    struct {
        _Bool referenceValuesByMetricsOrder;
    } _needsUpdateFlags;
    NSMutableArray *__referenceValuesByMetrics;
    double __cachedMetric;
    NSValue *__cachedValue;
}

+ (id)albumsGridItemWidthInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
@property(retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue; // @synthesize _cachedValue=__cachedValue;
@property(nonatomic, setter=_setCachedMetric:) double _cachedMetric; // @synthesize _cachedMetric=__cachedMetric;
@property(readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics; // @synthesize _referenceValuesByMetrics=__referenceValuesByMetrics;
- (void).cxx_destruct;
- (double)valueForMetric:(double)arg1;
- (id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3;
- (void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id *)arg2 closestBeforeMatch:(id *)arg3 closestAfterMatch:(id *)arg4;
- (void)addReferenceValue:(double)arg1 forMetric:(double)arg2;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (void)_setNeedsUpdate;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (id)init;

@end

