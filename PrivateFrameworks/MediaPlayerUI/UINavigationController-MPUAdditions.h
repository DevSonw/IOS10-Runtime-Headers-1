//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (MPUAdditions)
- (void)MPU_pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)MPU_popToViewController:(id)arg1 animated:(_Bool)arg2 popRequestSentCompletion:(CDUnknownBlockType)arg3;
- (void)MPU_popToViewControllerBeforeViewController:(id)arg1 animated:(_Bool)arg2;
- (void)MPU_popToRootViewControllerAnimated:(_Bool)arg1;
@end

