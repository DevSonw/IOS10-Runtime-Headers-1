//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UpNextWidget/_TtC12UpNextWidget14GutterizedView.h>

@class NSDate, NSString, UILayoutGuide, UIView;

@interface _TtC12UpNextWidget25LargeReminderTrailingView : _TtC12UpNextWidget14GutterizedView
{
    // Error parsing type: , name: titleAndDueDateBoundingGuide
    // Error parsing type: , name: title
    // Error parsing type: , name: dueDate
    // Error parsing type: , name: location
    // Error parsing type: , name: notes
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: dueDateLabel
    // Error parsing type: , name: locationLabel
    // Error parsing type: , name: notesLabel
    // Error parsing type: , name: persistentConstraints
    // Error parsing type: , name: topBaselineDistance
    // Error parsing type: , name: intraBaselineDistance
}

- (CDUnknownBlockType).cxx_destruct;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSString *notes; // @synthesize notes;
@property(nonatomic, copy) NSString *location; // @synthesize location;
@property(nonatomic, retain) NSDate *dueDate; // @synthesize dueDate;
@property(nonatomic, copy) NSString *title; // @synthesize title;
@property(nonatomic, readonly) UILayoutGuide *titleAndDueDateBoundingGuide; // @synthesize titleAndDueDateBoundingGuide;

// Remaining properties
@property(nonatomic, readonly) UIView *forFirstBaselineLayout;
@property(nonatomic, readonly) UIView *forLastBaselineLayout;

@end

