//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PSSpecifier, UIViewController;

@interface PSEditingPane : UIView
{
    PSSpecifier *_specifier;
    id _delegate;
    unsigned int _requiresKeyboard:1;
    UIViewController *_viewController;
}

+ (float)preferredHeight;
+ (id)defaultBackgroundColor;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)scrollViewToBeInsetted;
- (id)childViewControllerForHostingViewController;
- (void)layoutInsetContent:(struct CGRect)arg1;
- (void)insetContent;
- (_Bool)shouldInsetContent;
- (_Bool)changed;
- (_Bool)handlesDoneButton;
- (void)doneEditing;
- (void)editMode;
- (void)addNewValue;
- (void)viewDidBecomeVisible;
- (_Bool)wantsNewButton;
- (id)specifierLabel;
- (_Bool)requiresKeyboard;
- (id)preferenceValue;
- (void)setPreferenceValue:(id)arg1;
- (id)preferenceSpecifier;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGRect)contentRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

