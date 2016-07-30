//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NTKFaceColorScheme, _StrokeAnimatableShapeView;

@interface NTKActivityDialView : UIView
{
    _Bool _shouldRasterize;
    NSArray *_segments;
    NTKFaceColorScheme *_colorScheme;
    double _zoomFraction;
    _StrokeAnimatableShapeView *_arcView;
    _StrokeAnimatableShapeView *_tickView;
}

@property(readonly, nonatomic) _StrokeAnimatableShapeView *tickView; // @synthesize tickView=_tickView;
@property(readonly, nonatomic) _StrokeAnimatableShapeView *arcView; // @synthesize arcView=_arcView;
@property(nonatomic) double zoomFraction; // @synthesize zoomFraction=_zoomFraction;
@property(nonatomic) _Bool shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(retain, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (double)_segmentAlphaForEditMode:(long long)arg1;
- (double)_handAlphaForEditMode:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSegments;
- (id)initWithFrame:(struct CGRect)arg1;

@end
