//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDSwatchRenderingOperation.h>

__attribute__((visibility("hidden")))
@interface TSDShapeRenderingOperation : TSDSwatchRenderingOperation
{
    int mShapeType;
    double mAngle;
}

- (void)doWorkWithReadLock;
- (_Bool)needsPressedStateBackground;
- (struct UIEdgeInsets)swatchEdgeInsets;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 shapeType:(int)arg5 documentRoot:(id)arg6;

@end

