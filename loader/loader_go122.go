//go:build go1.22

// types.Info.FileVersions was added in Go 1.22, so we can only initialize it
// when built with Go 1.22.

package loader

import (
	"github.com/tinygo-org/tinygo/alt_go/ast"
	"github.com/tinygo-org/tinygo/alt_go/types"
)

func init() {
	initFileVersions = func(info *types.Info) {
		info.FileVersions = make(map[*ast.File]string)
	}
}
