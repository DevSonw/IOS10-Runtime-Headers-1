//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CALayer, NSString;

@protocol TSWPTextMagnifierRendererDelegate
@property(readonly, nonatomic) NSString *maskImageName;
@property(readonly, nonatomic) NSString *overlayImageName;
@property(readonly, nonatomic) NSString *underlayImageName;
- (_Bool)shouldHideCanvasLayer;
- (void)drawMagnifierClippedCanvasLayer:(CALayer *)arg1 inContext:(struct CGContext *)arg2;
@end

