//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CAMShutterButtonRingView : UIView
{
    _Bool _showContrastBorder;
    struct CAMShutterButtonSpec _spec;
}

@property(nonatomic) _Bool showContrastBorder; // @synthesize showContrastBorder=_showContrastBorder;
@property(nonatomic) struct CAMShutterButtonSpec spec; // @synthesize spec=_spec;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSpec:(struct CAMShutterButtonSpec)arg1;

@end
