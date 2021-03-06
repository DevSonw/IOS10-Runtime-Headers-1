//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIInterfaceActionGroupDisplaying-Protocol.h>
#import <UIKit/UIInterfaceActionHandlerInvocationDelegate-Protocol.h>

@class NSString, UIInterfaceActionGroup, UIInterfaceActionGroupView, UIInterfaceActionVisualStyle;
@protocol UIInterfaceActionVisualStyleProviding;

@interface UIInterfaceActionGroupViewController : UIViewController <UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionGroupDisplaying>
{
    id <UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
    UIInterfaceActionGroupView *_actionGroupView;
    UIInterfaceActionGroup *_actionGroup;
}

+ (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
@property(readonly, copy, nonatomic) UIInterfaceActionGroup *actionGroup; // @synthesize actionGroup=_actionGroup;
- (void).cxx_destruct;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)loadView;
@property(readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property(nonatomic) __weak id <UIInterfaceActionVisualStyleProviding> visualStyleProvider; // @synthesize visualStyleProvider=_visualStyleProvider;
- (void)reloadVisualStyle;
@property(readonly, copy, nonatomic) UIInterfaceActionGroupView *actionGroupView; // @synthesize actionGroupView=_actionGroupView;
- (id)initWithActionGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

