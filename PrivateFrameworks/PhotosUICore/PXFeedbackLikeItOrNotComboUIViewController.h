//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView;

@interface PXFeedbackLikeItOrNotComboUIViewController : UIViewController
{
    unsigned long long _feedbackCollectionType;
    _Bool __showsActivityIndicator;
    UIActivityIndicatorView *__activityIndicatorView;
}

@property(nonatomic) _Bool _showsActivityIndicator; // @synthesize _showsActivityIndicator=__showsActivityIndicator;
@property(readonly, nonatomic) UIActivityIndicatorView *_activityIndicatorView; // @synthesize _activityIndicatorView=__activityIndicatorView;
- (void).cxx_destruct;
- (void)setShowsActivityIndicator:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_provideFeedback:(id)arg1;
- (void)_fileRadar:(id)arg1;
- (void)_doFileRadar:(id)arg1;
- (void)_dislikedIt:(id)arg1;
- (void)_likedIt:(id)arg1;
- (id)initWithCollectionType:(unsigned long long)arg1;

@end
