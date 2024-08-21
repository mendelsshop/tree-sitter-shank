package tree_sitter_shank_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-shank"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_shank.Language())
	if language == nil {
		t.Errorf("Error loading Shank grammar")
	}
}
