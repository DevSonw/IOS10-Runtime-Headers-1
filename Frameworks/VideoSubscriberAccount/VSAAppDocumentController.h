//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/IKAppDocumentDelegate-Protocol.h>

@class IKAppDocument, IKViewElement, NSError, NSString, VSAViewModel;
@protocol VSAAppDocumentControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAAppDocumentController : NSObject <IKAppDocumentDelegate>
{
    IKAppDocument *_appDocument;
    id <VSAAppDocumentControllerDelegate> _delegate;
    VSAViewModel *_viewModel;
    NSError *_viewModelError;
    IKViewElement *_templateElement;
}

@property(retain, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
@property(retain, nonatomic) NSError *viewModelError; // @synthesize viewModelError=_viewModelError;
@property(retain, nonatomic) VSAViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAAppDocumentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
- (void).cxx_destruct;
- (void)_notiftyDidFailToUpdateViewModel;
- (void)_notiftyDidUpdateViewModel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_imageItemProviderWithImageElement:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (_Bool)_updateViewModel:(id)arg1 WithError:(id *)arg2;
- (id)_newViewModel;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithAppDocument:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
