//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (CustomTransitions)
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (void)pu_navigationTransitionWillEnd:(id)arg1;
- (void)pu_navigationTransitionWillStart:(id)arg1;
- (void)_pu_setCurrentNavigationTransition:(id)arg1;
- (id)pu_currentNavigationTransition;
- (id)pu_currentInteractiveTransition;
- (void)pu_popToViewController:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (void)pu_popViewControllerAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)pu_pushViewController:(id)arg1 withTransition:(id)arg2 animated:(_Bool)arg3 isInteractive:(_Bool)arg4;
@end
