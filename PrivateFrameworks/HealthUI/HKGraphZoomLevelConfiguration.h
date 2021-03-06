//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject
{
    NSDateComponents *_axisLabelIntervalComponents;
    NSDateComponents *_seriesPointIntervalComponents;
    double _seriesBlockSize;
    double _zoomLevelThreshold;
    double _canonicalSize;
    double _approximateSeriesPointInterval;
}

+ (id)defaultCalendar;
+ (id)configurationForZoomLevel:(long long)arg1;
+ (id)_generateConfigurationForZoomLevel:(long long)arg1;
@property(readonly, nonatomic) double approximateSeriesPointInterval; // @synthesize approximateSeriesPointInterval=_approximateSeriesPointInterval;
@property(readonly, nonatomic) double canonicalSize; // @synthesize canonicalSize=_canonicalSize;
@property(readonly, nonatomic) double zoomLevelThreshold; // @synthesize zoomLevelThreshold=_zoomLevelThreshold;
@property(readonly, nonatomic) double seriesBlockSize; // @synthesize seriesBlockSize=_seriesBlockSize;
@property(readonly, nonatomic) NSDateComponents *seriesPointIntervalComponents; // @synthesize seriesPointIntervalComponents=_seriesPointIntervalComponents;
@property(readonly, nonatomic) NSDateComponents *axisLabelIntervalComponents; // @synthesize axisLabelIntervalComponents=_axisLabelIntervalComponents;
- (void).cxx_destruct;

@end

