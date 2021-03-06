//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (CameraKit)
+ (struct CGAffineTransform)cam_transformForInterfaceOrientation:(long long)arg1;
+ (void)cam_convertRect:(struct CGRect)arg1 toCeiledBounds:(struct CGRect *)arg2 andRoundedCenter:(struct CGPoint *)arg3 toViewScale:(id)arg4;
+ (void)cam_ceilBounds:(struct CGRect *)arg1 andRoundCenter:(struct CGPoint *)arg2 toViewScale:(id)arg3;
+ (double)cam_setHiddenDefaultAnimationDuration;
- (void)cam_setBorderColor:(id)arg1 width:(double)arg2;
- (void)cam_setBorderColor:(id)arg1;
- (void)cam_setBorder;
- (void)cam_rotateWithInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)cam_setHidden:(_Bool)arg1 animationDuration:(double)arg2 delay:(double)arg3;
- (void)cam_setHidden:(_Bool)arg1 animationDuration:(double)arg2;
- (void)cam_setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)cam_isOnScreen:(id)arg1;
- (void)cam_ensureSubview:(id)arg1;
@end

