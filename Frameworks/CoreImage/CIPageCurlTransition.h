//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPageCurlTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputBacksideImage;
    CIImage *inputShadingImage;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CIPageCurlTransNoEmap;
- (id)_CIPageCurlTransition;

@end

