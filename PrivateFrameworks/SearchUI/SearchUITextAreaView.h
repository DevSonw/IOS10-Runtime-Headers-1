//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/NUIContainerStackView.h>

#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>

@class NSMutableArray, NSString, SearchUITitleContainerView, UILabel;

@interface SearchUITextAreaView : NUIContainerStackView <NUIContainerStackViewDelegate>
{
    unsigned long long _style;
    SearchUITitleContainerView *_titleContainer;
    NSMutableArray *_richTextFields;
    UILabel *_footnoteLabel;
}

+ (id)footNoteLabelFont;
@property(retain) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain) NSMutableArray *richTextFields; // @synthesize richTextFields=_richTextFields;
@property(retain) SearchUITitleContainerView *titleContainer; // @synthesize titleContainer=_titleContainer;
@property unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (struct UIEdgeInsets)containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (void)updateTextWidths;
- (_Bool)noFootNote;
- (_Bool)noRichTextFields;
- (void)updateWithResult:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

