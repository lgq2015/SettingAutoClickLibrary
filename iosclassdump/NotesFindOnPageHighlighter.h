//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebFindOnPageHighlighter.h"

@class NSArray, NSMutableArray, NSString, UIScrollView, UIView, UIWebDocumentView;

@interface NotesFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter>
{
    NSMutableArray *_highlightBubbleViews;
    NSArray *_pdfHighlightViews;
    UIView *_highlightHostView;
    UIWebDocumentView *_documentView;
    UIScrollView *_scrollView;
    NSString *_searchText;
    id <UIWebFindOnPageHighlighterDelegate> _delegate;
    unsigned long long _numberOfMatches;
    unsigned long long _highlightedMatchIndex;
}

+ (_Bool)expandedRectsWouldIntersect:(id)arg1;
- (void).cxx_destruct;
- (void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(struct CGRect)arg2;
- (void)_clearHighlightViews;
- (void)_clearHighlightViews:(_Bool)arg1;
- (void)_highlightFindOnPageMatch:(_Bool)arg1;
- (_Bool)_highlightSelection;
- (void)_setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 contentViews:(id)arg4 wobble:(_Bool)arg5;
- (void)_updateHighlightedMatchIndex:(_Bool)arg1;
- (void)clearSelectionAnimated:(_Bool)arg1;
- (void)dealloc;
@property(nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)findOnPageOptions;
- (_Bool)hasActiveHighlights;
- (void)highlightNextMatch;
- (void)highlightPreviousMatch;
@property(readonly, nonatomic) unsigned long long highlightedMatchIndex; // @synthesize highlightedMatchIndex=_highlightedMatchIndex;
- (id)initWithDocumentView:(id)arg1 inScrollView:(id)arg2;
@property(readonly, nonatomic) unsigned long long numberOfMatches; // @synthesize numberOfMatches=_numberOfMatches;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 wobble:(_Bool)arg4;
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(_Bool)arg4;
- (_Bool)updateHighlightBubbleWobble:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
