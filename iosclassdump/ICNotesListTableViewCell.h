//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class ICSearchResult, NSLayoutConstraint, UIImageView, UILabel;

@interface ICNotesListTableViewCell : UITableViewCell
{
    _Bool _needsToUpdateViews;
    id <ICSearchIndexableNote> _note;
    ICSearchResult *_searchResult;
    double _computedRowHeight;
    UILabel *_titleLabel;
    UILabel *_snippetLabel;
    UILabel *_lastModifiedLabel;
    UIImageView *_lockIcon;
    NSLayoutConstraint *_lockIconContainerZeroWidthConstraint;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (double)computeRowHeight;
@property(nonatomic) double computedRowHeight; // @synthesize computedRowHeight=_computedRowHeight;
- (void)contentSizeCategoryDidChange;
- (void)copySizingInfoFromCell:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak UILabel *lastModifiedLabel; // @synthesize lastModifiedLabel=_lastModifiedLabel;
@property(nonatomic) __weak UIImageView *lockIcon; // @synthesize lockIcon=_lockIcon;
@property(nonatomic) __weak NSLayoutConstraint *lockIconContainerZeroWidthConstraint; // @synthesize lockIconContainerZeroWidthConstraint=_lockIconContainerZeroWidthConstraint;
@property(nonatomic) _Bool needsToUpdateViews; // @synthesize needsToUpdateViews=_needsToUpdateViews;
@property(readonly, nonatomic) id <ICSearchIndexableNote> note; // @synthesize note=_note;
- (void)noteDecryptedStatusDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (void)refreshModificationDate;
- (void)refreshSnippetLabelForAttachmentsIfNecessary;
@property(readonly, nonatomic) ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void)setNote:(id)arg1 searchResult:(id)arg2;
@property(nonatomic) __weak UILabel *snippetLabel; // @synthesize snippetLabel=_snippetLabel;
- (void)setTitle:(id)arg1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setupLabels;
- (void)updateNoteLockedStatusIfNecessary;
- (void)updateSizingInfoForTableFrame:(struct CGRect)arg1;
- (void)updateViewsFromCurrentNote;
- (void)updateViewsFromCurrentNoteIfNecessary;
- (void)willMoveToWindow:(id)arg1;

@end

