//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSLayoutConstraint, UILabel;

@interface NotesSearchTableView : UITableView
{
    UILabel *_noSearchResultsLabel;
    NSLayoutConstraint *_noSearchResultsLabelTopMarginConstraint;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
@property(retain, nonatomic) UILabel *noSearchResultsLabel; // @synthesize noSearchResultsLabel=_noSearchResultsLabel;
@property(retain, nonatomic) NSLayoutConstraint *noSearchResultsLabelTopMarginConstraint; // @synthesize noSearchResultsLabelTopMarginConstraint=_noSearchResultsLabelTopMarginConstraint;
- (void)setNoSearchResultsLabelVisible:(_Bool)arg1;
- (void)updateNoSearchResultsLabel;

@end
